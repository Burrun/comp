#include <stdlib.h>
#include <stdio.h>
#include "type.h"
#include "y.tab.h"

extern A_NODE *root;

extern int semantic_err, syntax_err;
FILE *fout;
void initialize();
void print_ast();

void main(int argc,char *argv[]){

		initialize();
		yyparse();
		if(syntax_err) exit(1);
		print_ast(root);
		semantic_analysis(root);
		if(semantic_err) exit(1);
		print_sem_ast(root);
		exit(0);
}