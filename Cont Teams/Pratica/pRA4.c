/*
	Manipulação de um RA representado em formato numérico.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (void)
{	long long int vRA;
	
	printf("Informe o RA:\n");
	scanf("%lld", &vRA);
	
	printf("\n\nO RA informado foi: %lld\n", vRA);

	printf("\n\nO novo RA eh: %lld\n", vRA + 1);
	
	return 0;
}
