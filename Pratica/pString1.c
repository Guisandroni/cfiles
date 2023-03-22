#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	char carac;

	printf("Informe o caracter: ");
	scanf("%c", &carac);
	
	printf("\n\n\n\n\nInformou %c cujo codigo ASCII eh %d\n", 
			carac, carac);
	
	return 0;
}
