#include <stdlib.h>
#include <stdio.h>
#include "type.h"
#include "y.tab.h"

extern A_NODE *root;

extern int semantic_err; // 추가(semantic.c에서 필요)
FILE *fout;
void initialize();
void print_ast();

void main(int argc,char *argv[]){

		initialize();
		yyparse();
		if(syntax_error) exit(1);
		print_ast(root);
		semantic_analysis(root);
		if(semantic_err) exit(1);
		print_sem_ast(root);
		exit(0);
}