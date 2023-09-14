#include <stdio.h>
#include <string.h>
typedef struct { int codigo; char nome[15]; } TReg;

int main()
{	FILE *arq;
	TReg aluno;
	char NomeInfo[20];

	arq = fopen( "teste.dat", "r+b" );
	
	printf( "Informe o nome a pesquisar:\n" );
	scanf( "%s", NomeInfo );
	
	fread( &aluno, sizeof(TReg), 1, arq );
	while( !feof(arq) && strcmp(NomeInfo, aluno.nome) != 0 )
	{	
     	fread( &aluno, sizeof(TReg), 1, arq );
	}
	if( feof(arq) )
		printf( "\n\n\nNao ACHOU %s no arquivo\n", NomeInfo );
	else
		printf( "\n\n\n%s tem o codigo %d\n", NomeInfo, aluno.codigo );
	
	// Alterando....
	printf("\nAlterando.....");
	fseek(arq,-sizeof(aluno),SEEK_CUR);
	aluno.codigo=111;	
	fwrite(&aluno,sizeof(aluno),1,arq);
	
	fclose(arq);
	return 0;
}
