#include <stdio.h>

typedef struct 
{ 
    int codigo; 
	char nome[15]; 
} TReg;

int main()
{	
    FILE *arq;
	TReg aluno;
	
	arq = fopen("teste.dat", "a+b");
	
	
	while(1)
	{	printf( "Codigo:\n" ); 
	    scanf( "%d", &aluno.codigo );
		if( aluno.codigo == -1 ) break ;
		
		printf( "Nome:\n" ); 
		scanf( "%s", aluno.nome );
		
		fwrite( &aluno, sizeof(aluno), 1, arq );
	}
	fclose(arq);
	return 0;
}
