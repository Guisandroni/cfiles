// Angelino Pires - RA: 0030481723015
// Bruno Hiroki - RA: 0030481723013
// Compilado pelo Cygwin

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "function_RA.c"

void main ()
{
	char raVelho[9] = "", raNovo[14] = "";
	char curso[4] = "", continuar[4] = "";
	int comprimentoVelho = 0;

	system("clear");
	cleanIt(raVelho);
	cleanIt(raNovo);
	cleanIt(curso);

	printf("\nInsira seu RA antigo abaixo: \n");
	scanf("%s", raVelho);

	comprimentoVelho = strlen(raVelho);

	if (comprimentoVelho != 8)
	{
		printf("\nNumero de caracteres incorreto, tente novamente!\n");
	}
	else
	{
		cleanIt(curso);
		cleanIt(raNovo);
		cleanIt(continuar);
		novoRA(raVelho, raNovo, curso);
		printf("\nEste e seu novo RA: %s\n", raNovo);
	}
}