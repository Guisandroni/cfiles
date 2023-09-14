#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	char palavra[21], frase[100];

	printf("Informe a palavra: ");
	scanf("%20s", palavra);
	
	puts(palavra);
	
	printf("\n\nInforme a frase: ");
	scanf(" %[^\n]", frase);
	
	puts(frase);

	return 0;
}
