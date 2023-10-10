#include <stdio.h>
#include "Structs/vec_set.h"
#include "Structs/vector.h"
#include "logger.h"

#include "node.h"
#include "rec_descent.h"
#include "lex_graph.h"
#include "spec_constants.h"

struct casee {
    char s[256];
    bool valid;
};

bool check_word_aux_det(lex_graph* fa, const char* word) {
    bool res = 0;
    bool is_conn = 0;
    uint state = fa->start_state;

    uint len = strlen(word);
    for(uint i = 0; i < len; i++) {
        struct state* cur_state = (struct state*)VectorGet(fa->states, state - 1);

        //todo conns -> vec_set
        uint n_conns = VectorSize(cur_state->conns);
        is_conn = 0;

        for(uint n_conn = 0; n_conn < n_conns; n_conn++) {
            conn* cur_conn = (conn*)VectorGet(cur_state->conns, n_conn);

            if(cur_conn->symb == word[i]) {
                state = cur_conn->next_state;
                is_conn = 1;
                break;
            }
        }
        if(!is_conn)
            break;
    }

    if(VecsetFind(fa->accept_states, state))
        return 1;
    return 0;
}

bool check_word_aux_ndet(lex_graph* fa, const char* word, uint state) {
    bool res = 0;

    uint len = strlen(word);
    struct state* cur_state = (struct state*)VectorGet(fa->states, state - 1);

    uint n_conns = VectorSize(cur_state->conns);

    for(uint n_conn = 0; n_conn < n_conns; n_conn++) {
        conn* cur_conn = (conn*)VectorGet(cur_state->conns, n_conn);

        if(cur_conn->symb == *word) {
            state = cur_conn->next_state;
            if (len > 1)
                res = check_word_aux_ndet(fa, word + 1, state);
            if(res)
                return res;
        }
        else if(cur_conn->symb == SPEC_EPS_VAL) {
            state = cur_conn->next_state;

            res = check_word_aux_ndet(fa, word, state);
            if(res)
                return res;
        }
    }

    if(VecsetFind(fa->accept_states, state))
        return 1;
    return res;
}

bool check_word(lex_graph* fa, const char* word, int is_det) {
    if(is_det)
        return check_word_aux_det(fa, word);
    return check_word_aux_ndet(fa, word, fa->start_state);
}

void check_fa(lex_graph* fa, const char* regexp, const vector* cases, bool is_det) {

    uint n_cases = VectorSize(cases);
    for(uint n_case = 0; n_case < n_cases; n_case++) {
        const struct casee* cur_case = (struct casee*)VectorGet(cases, n_case);

        if(check_word(fa, cur_case->s, is_det) == cur_case->valid) {
            printf("- case%2u [%16s] 1\n", n_case, cur_case->s);
        }
        else {
            printf("- case%2u [%16s] 0\n", n_case, cur_case->s);
        }
    }
}

void check_nfa_test(char* regexp, vector* cases) {
    printf("\ncheck_nfa_test init:\n");

    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;
    VectorPush(metadata, &accept_state_data);

    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);

    check_fa(nfa, regexp, cases, false);

    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

void check_oneletter_nfa_test(char* regexp, vector* cases) {
    printf("\ncheck_oneletter_nfa_test init:\n");

    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;
    VectorPush(metadata, &accept_state_data);

    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    lex_graph* adv_nfa = ConvertNFAtoAdvNFA(nfa);

    check_fa(adv_nfa, regexp, cases, false);

    LexGraphRemove(adv_nfa);
    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

void check_dfa_from_oneletter_nfa_test(char* regexp, vector* cases) {
    printf("\ncheck_dfa_from_oneletter_nfa_test init:\n");

    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;
    VectorPush(metadata, &accept_state_data);

    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    lex_graph* adv_nfa = ConvertNFAtoAdvNFA(nfa);
    lex_graph* dfa = ConvertNFAtoDFA(adv_nfa);

    check_fa(dfa, regexp, cases, true);

    LexGraphRemove(dfa);
    LexGraphRemove(adv_nfa);
    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

void check_dfa_from_nfa_test(char* regexp, vector* cases) {
    printf("\ncheck_dfa_from_nfa_test init:\n");

    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;
    VectorPush(metadata, &accept_state_data);

    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    lex_graph* dfa = ConvertNFAtoDFA(nfa);

    check_fa(dfa, regexp, cases, true);

    LexGraphRemove(dfa);
    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

void check_cdfa_test(char* regexp, vector* cases) {
    printf("\ncheck_cdfa_test init:\n");

    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;
    VectorPush(metadata, &accept_state_data);

    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    lex_graph* dfa = ConvertNFAtoDFA(nfa);
    ConvertToCompleteFA(dfa);

    check_fa(dfa, regexp, cases, true);

    LexGraphRemove(dfa);
    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

void check_add_cdfa_test(char* regexp, vector* cases) {
    printf("\ncheck_add_cdfa_test init:\n");

    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;
    VectorPush(metadata, &accept_state_data);

    Node* tree = CreateAST(regexp, strlen(regexp) + 1);
    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    lex_graph* dfa = ConvertNFAtoDFA(nfa);
    ConvertToCompleteFA(dfa);

    lex_graph* acdfa = ConvertCDFAToAddition(dfa);

    vector* anti_cases = VectorGenerateDuplicate(cases);
    uint n_elems = VectorSize(anti_cases);
    for(uint n_case = 0; n_case < n_elems; n_case++) {
        struct casee* cas = (struct casee*)VectorGet(anti_cases, n_case);
        cas->valid = !cas->valid;
    }

    check_fa(acdfa, regexp, anti_cases, true);

    VectorDelete(anti_cases);
    LexGraphRemove(acdfa);
    LexGraphRemove(dfa);
    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

void show_test(char* regexp) {
    printf("show_test init: check pngs\n");

    vector* metadata = VectorNew(1, sizeof(int));
    int accept_state_data = 42;

    VectorPush(metadata, &accept_state_data);
    Node* tree = CreateAST(regexp, strlen(regexp) + 1);

    lex_graph* nfa = ConvertTreeToNFA(tree, metadata);
    DumpLexGraph(nfa, "nfa.png");

    lex_graph* adv_nfa = ConvertNFAtoAdvNFA(nfa);
    DumpLexGraph(adv_nfa, "adv_nfa.png");

    lex_graph* dfa = ConvertNFAtoDFA(adv_nfa);
    DumpLexGraph(dfa, "dfa.png");

    ConvertToCompleteFA(dfa);
    DumpLexGraph(dfa, "cdfa.png");

    lex_graph* acdfa = ConvertCDFAToAddition(dfa);
    DumpLexGraph(acdfa, "acdfa.png");
    TextDumpLexGraph(acdfa);

    LexGraphRemove(acdfa);
    LexGraphRemove(dfa);
    LexGraphRemove(adv_nfa);
    LexGraphRemove(nfa);
    NodeFullDtor(tree);
}

#define PUSH_CASE(case, is_valid)          \
{                                       \
    struct casee tmp = {};\
    strcpy(tmp.s, case);                \
    tmp.valid = is_valid;               \
    VectorPush(cases, &tmp);             \
}

int main(const int argc, const char* argv[]){

    LogInit(".");
    char regexp[256] = "b(a|aa*)(b|((b|a)a))\n";
    printf("our regexp: (a|bc|qq)*ff");

    vector* cases = VectorNew(0, sizeof(struct casee));

    PUSH_CASE("aaaaaaff", 1);
    PUSH_CASE("bcbcff", 1);
    PUSH_CASE("ff", 1);
    PUSH_CASE("qqff", 1);
    PUSH_CASE("abcqqqqbcaff", 1);
    PUSH_CASE("f", 0);
    PUSH_CASE("af", 0);
    PUSH_CASE("bff", 0);
    PUSH_CASE("aqff", 0);
    PUSH_CASE("", 0);

    check_nfa_test(regexp, cases);
    check_oneletter_nfa_test(regexp, cases);
    check_dfa_from_oneletter_nfa_test(regexp, cases);
    check_dfa_from_nfa_test(regexp, cases);
    check_cdfa_test(regexp, cases);
    check_add_cdfa_test(regexp, cases);
    show_test(regexp);

    LogClose();

    return 0;
}
