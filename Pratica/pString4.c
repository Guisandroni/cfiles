#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	char frase[100];
	int cont;
	
	printf("Digite alguma coisa: ");
	
	fgets(frase, 98, stdin);	// Leia até 98 caracteres da entrada 
								// padrão para a variável <frase>
	
	puts(frase);
	
	cont = 0;
	while (cont < 30)
	{	printf("%3d ", frase[cont]);
		cont = cont + 1;
	}
	printf("\n\n");
	
	// Removendo o enter da entrada lida
	cont = 0;
	while (frase[cont] != '\0')
		cont = cont + 1;
	
	frase[cont - 1] = '\0';
	
	puts(frase);
	
	cont = 0;
	while (cont < 30)
	{	printf("%3d ", frase[cont]);
		cont = cont + 1;
	}

	return 0;
}
