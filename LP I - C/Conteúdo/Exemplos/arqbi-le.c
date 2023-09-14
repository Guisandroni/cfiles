#include <stdio.h>

typedef struct { int codigo; char nome[15]; } TReg;

int main()
{	FILE *arq;
	TReg aluno;

	arq = fopen( "teste.dat", "r+b" );
	
	if (arq==NULL)
	{
	   printf("erro ao procurar arquivo");
	   return;
	}
	
	fread( &aluno, sizeof(TReg), 1, arq );
	while( !feof(arq) )
	{	printf( "%d - %s\n", aluno.codigo, aluno.nome );
		fread( &aluno, sizeof(TReg), 1, arq );
	}
	
	fclose(arq);
	
	return 0;
}
