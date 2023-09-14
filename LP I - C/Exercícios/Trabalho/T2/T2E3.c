// Angelino Pires - RA: 0030481723015
// Bruno Hiroki - RA: 0030481723013
// Compilado pelo Cygwin

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "function_RA.c"

void main ()
{
	char stringCompridona[60], temp[60], CPF[12], stringNumerica[60];
	int comprimento = strlen(stringCompridona);

	printf("Insira sua string: \n");
	gets(stringCompridona);

	cleanIt(temp);
	onlyNumbers(stringCompridona,stringNumerica);
	substring(stringNumerica,CPF,1,11);
	printf("O CPF é: %s", CPF);

	comprimento = strlen(stringNumerica);
	substring(stringNumerica,temp,12,comprimento);
	getSumOfDots(temp, stringNumerica);
}
