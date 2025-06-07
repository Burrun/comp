#include <stdlib.h>
#include <stdio.h>
#include "type.h"
#include "y.tab.h"

extern A_NODE *root;

FILE *fout;
void initialize();
void print_ast();

void main(int argc,char *argv[]){

		if((fout=fopen("a.asm","w"))==NULL){
				printf("can not open output file: a.asm\n");
				exit(1);
		}

		initialize();
		yyparse();
		//if(syntax_error) exit(1);
		print_ast(root);

		exit(0);
}