# Lexer Generator
### Few words for introduction
For compiled programming languages, there are several stages of processing the source code of the program on the way to generating an executable or object file. In most implementations, one of the stages is the stage of converting the source text into an array of tokens, which greatly simplifies and optimizes the following stages (syntactic, semantic analysis, ast generation).

Manual writing of a lexical analyzer (lexer) is a rather time-consuming and crutchy task, which is why most developers use programs that allow generating lexical analyzers based on some configuration file. In my work, my own version of the implementation of such a generator is presented.

### Usage
``` $ make mode=lexer```<br/>
``` $ ./bin/main CONFIG_NAME DST_DIR_NAME```<br/>

### Structure of generator
In my implementation, the generated lexer is an object (or text) file that contains a function that parses an array of characters and gives the attributes of the recognized token: the group code of its type and the common number (for example, if the token is the name of a conditional operator, the function will return the keyword group code and the common number corresponding to this conditional operator).

```c
LEXER_RET_CODE parse_lexem(char* buff, unsigned int* offset, unsigned long long int* data, unsigned long long int* subdata) {
...
}
```
the lexer also includes a header file with the declaration of the parsing function and the codes of all tokens (as an example, you can see the [qute_lexer.h](samples/lexer_generator/qute_lexer.h)).

The configuration file required to generate the lexer has the following syntax:

```
group {
	lexem {"re"}
	lexem {"re"}
	...
}

group {
	lexem {"re"}
	...
}
```
where 
- "group" is the name of a group of tokens(keywords, separators, identifiers)
- "lexem" is the name of the token
- "re" is a regular expression describing resp. token
As an example, you can see the file  [input.txt](samples/lexer_generator/input.txt)

### Implementation details
the resulting lexer is a deterministic finite automaton that, based on an array of characters, issues attributes of the recognized token.

![[Pasted image 20230611191232.png]]

To generate a lexer, the program reads all regular expressions, on the basis of which it builds AST using recursive descent. Then the ast is converted to nondeterministic finite automaton. Algorithms for building and optimizing NFA, DFA can be found in "Basics of Compiler Design" by Torben Mogensen. At the next stage, NFA is generated, which is a union of the NFA built at the previous stage. This NFA is converted to DFA , on the basis of which a source code file is generated. 

An example of the generated source code can be viewed here  [output.cpp](samples/lexer_generator/output.cpp).

### Example
To demonstrate the work, a veclan language configuration file was taken and a simple code example was written that uses the generated lexer.

To generate all the files necessary for the example, just run the command
``` $ make lexer_demo mode=lexer ```

The following text is supplied to the program input:
```
if(some_value == 42) {
	v1 in R;
	v2 in Z4;
	print(v1, v2);
}
```
At the output, we get the attributes of all tokens, which can be decoded using the header file
```
$ ./lexer_demo
data = 0, subdata = 0
data = 5, subdata = 49
data = 3, subdata = 49
data = 2, subdata = 29
data = 2, subdata = 29
data = 4, subdata = 41
data = 5, subdata = 50
data = 5, subdata = 43
data = 3, subdata = 43
data = 0, subdata = 7
found standart space!: fract_space
data = 1, subdata = 21
data = 5, subdata = 45
data = 3, subdata = 45
data = 0, subdata = 7
found standart space!: ded_ring_space
data = 1, subdata = 20
data = 5, subdata = 45
data = 3, subdata = 45
data = 5, subdata = 49
data = 3, subdata = 49
data = 5, subdata = 48
data = 3, subdata = 48
data = 5, subdata = 50
data = 5, subdata = 45
data = 5, subdata = 44
```

#### DFA/NFA example
Also attached is a demonstration of how the conversion to nfa/dfa looks like.

```cpp
...
char re[] = "[a-c] | (159)a*";

vector* metadata = VectorNew(1, sizeof(int));
int accept_state_data = 42;

VectorPush(metadata, &accept_state_data);

lex_graph* tree = ConvertTreeToNFA(CreateAST(re, strlen(re)), metadata);
TextDumpLexGraph(tree);
DumpLexGraph(tree, "nfa_demo.png");

lex_graph* tree_dfa = ConvertNFAtoDFA(tree);
DumpLexGraph(tree_dfa, "dfa_demo.png");
...
```

Based on the regular expression ``[a-c] | (159)a*``, the NFA was built. Note that the initial state is marked in green, the intermediate state is yellow, and the final state is red.

![[nfa_demo.png]]
Then DFA was built on the basis of NFA
![[dfa_demo.png]]

### Information resources
1. "Basics of Compiler Design" by Torben Mogensen, издание 20.08.2010. Разделы 2.6, 2.8
