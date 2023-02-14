CFLAGS = -g -O2 -c
LFLAGS = 

CASMFLAGS = 

SRC	      	= ../src
TXTPARSE 	= ../src/InputHandler
ANALSRC  	= ../src/Analyzer
STRUCTSSRC 	= ../src/Structs
LEX_GEN_SRC 	= ../src/lex_generator
LEX_GEN_SRC_STRUCTS 	= ../src/lex_generator

all: lex

lex: llogger.o ltext_storage.o lnode.o ldescent.o lstack.o lvector.o lmain.o llex_graph.o lset.o lvec_set.o
	g++ $(LFLAGS) llogger.o ltext_storage.o lmain.o lnode.o ldescent.o lstack.o lvector.o llex_graph.o lset.o lvec_set.o -o durex

lmain.o: $(LEX_GEN_SRC)/main.cpp
	g++ $(CFLAGS) $(LEX_GEN_SRC)/main.cpp -o lmain.o

llogger.o: $(LEX_GEN_SRC)/logger.cpp $(LEX_GEN_SRC)/logger.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/logger.cpp -o llogger.o

ltext_storage.o: $(LEX_GEN_SRC)/text_storage.cpp $(LEX_GEN_SRC)/text_storage.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/text_storage.cpp -o ltext_storage.o

lnode.o: $(LEX_GEN_SRC)/node.cpp $(LEX_GEN_SRC)/node.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/node.cpp -o lnode.o

ldescent.o: $(LEX_GEN_SRC)/rec_descent.cpp $(LEX_GEN_SRC)/rec_descent.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/rec_descent.cpp -o ldescent.o

lstack.o: $(LEX_GEN_SRC)/stack.cpp $(LEX_GEN_SRC)/stack.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/stack.cpp -o lstack.o

lvector.o: $(LEX_GEN_SRC)/vector.cpp $(LEX_GEN_SRC)/vector.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/vector.cpp -o lvector.o

llex_graph.o: $(LEX_GEN_SRC)/lex_graph.cpp $(LEX_GEN_SRC)/lex_graph.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/lex_graph.cpp -o llex_graph.o

lset.o: $(LEX_GEN_SRC)/set.cpp $(LEX_GEN_SRC)/set.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/set.cpp -o lset.o

lvec_set.o: $(LEX_GEN_SRC)/vec_set.cpp $(LEX_GEN_SRC)/vec_set.h
	g++ $(CFLAGS) $(LEX_GEN_SRC)/vec_set.cpp -o lvec_set.o

lclean:
	rm lmain.o lloger.o ltext_storage.o llogger.o lnode.o ldescent.o llex_graph.o lvector.o lset.o lvec_set.o

########################################################

vec: statement_data.o logger.o main.o compiler_unit.o text_storage.o vector.o input_handler.o analyzer.o lexical_analyzer.o stack.o list.o htable.o node.o syntax_analyzer.o
	g++ $(LFLAGS) logger.o main.o compiler_unit.o text_storage.o vector.o input_handler.o analyzer.o lexical_analyzer.o stack.o list.o htable.o node.o syntax_analyzer.o statement_data.o -o vec 

main.o: $(SRC)/main.cpp
	g++ $(CFLAGS) $(SRC)/main.cpp -o main.o

compiler_unit.o: $(SRC)/compiler_unit.cpp $(SRC)/compiler_unit.h 
	g++ $(CFLAGS) $(SRC)/compiler_unit.cpp -o compiler_unit.o

stack.o: $(STRUCTSSRC)/stack.cpp $(STRUCTSSRC)/stack.h
	g++ $(CFLAGS) $(STRUCTSSRC)/stack.cpp -o stack.o

vector.o: $(STRUCTSSRC)/vector.cpp $(STRUCTSSRC)/vector.h
	g++ $(CFLAGS) $(STRUCTSSRC)/vector.cpp -o vector.o

list.o: $(STRUCTSSRC)/list.cpp $(STRUCTSSRC)/list.h
	g++ $(CFLAGS) $(STRUCTSSRC)/list.cpp -o list.o

node.o: $(STRUCTSSRC)/node.cpp $(STRUCTSSRC)/node.h
	g++ $(CFLAGS) $(STRUCTSSRC)/node.cpp -o node.o

htable.o: $(STRUCTSSRC)/hash_table.cpp $(STRUCTSSRC)/hash_table.h
	g++ $(CFLAGS) $(STRUCTSSRC)/hash_table.cpp -o htable.o

logger.o: $(SRC)/logger.cpp $(SRC)/logger.h
	g++ $(CFLAGS) $(SRC)/logger.cpp -o logger.o

text_storage.o: $(STRUCTSSRC)/text_storage.cpp $(STRUCTSSRC)/text_storage.h
	g++ $(CFLAGS) $(STRUCTSSRC)/text_storage.cpp -o text_storage.o

input_handler.o: $(TXTPARSE)/input_handler.cpp $(TXTPARSE)/input_handler.h 
	g++ $(CFLAGS) $(TXTPARSE)/input_handler.cpp -o input_handler.o

analyzer.o:	$(ANALSRC)/analyzer.h $(ANALSRC)/analyzer.cpp
	g++ $(CFLAGS) $(ANALSRC)/analyzer.cpp -o analyzer.o

lexical_analyzer.o: $(ANALSRC)/lexical_analyzer.cpp
	g++ $(CFLAGS) $(ANALSRC)/lexical_analyzer.cpp -o lexical_analyzer.o

syntax_analyzer.o: $(ANALSRC)/syntax_analyzer.cpp
	g++ $(CFLAGS) $(ANALSRC)/syntax_analyzer.cpp -o syntax_analyzer.o

statement_data.o: $(SRC)/statement_data.cpp $(SRC)/statement_data.h
	g++ $(CFLAGS) $(SRC)/statement_data.cpp -o statement_data.o
clean:
	rm main.o stack.o compiler_unit.o logger.o vector.o text_storage.o input_handler.o analyzer.o  lexical_analyzer.o
