#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{	int iValor;			// a variável iValor é do tipo int'
	double dValor, *p2;	// dValor é double e p2 é ponteiro para double
	char cValor, *p3;	// cValor é char e p3 é ponteiro para char
	int *p1;			// a variável p1 é um ponteiro para um dado
						// do tipo int

	printf("%d %d %d\n", sizeof(iValor), sizeof(dValor), sizeof(cValor));
	printf("%d %d %d\n", sizeof(p1), sizeof(p2), sizeof(p3));

	iValor = 5;
	dValor = iValor * 3.27;
	cValor = 120;
	
	printf("iValor: %d\ndValor: %lf\ncValor: %i\n", iValor, dValor, cValor);
	
	p1 = &iValor;		// atribua o endereco de iValor para p1
	p2 = &dValor;		// atribua o endereco de dValor para p2
	p3 = &cValor;		// atribua o endereco de cValor para p3
	
	printf("\n\np1: %p\np2: %p\np3: %p\n", p1, p2, p3);
	
	*p1 = 32000;		// atribua 32000 para o dado apontado por p1
	*p2 = *p2 / 2;		// atribua a metade de dValor para o dado apontado por p2
	*p3 = 23;			// atribua 23 para o dado apontado por p3
	
	printf("iValor: %d\ndValor: %lf\ncValor: %i\n", iValor, dValor, cValor);
	
	return 0;
}
