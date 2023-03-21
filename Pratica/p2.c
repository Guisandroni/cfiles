#include <stdio.h>

int main (void)
{	float valor = 1000.0;
	int cont = 0;

	while (cont < 1000 * 10)
	{	valor = valor - 0.1;
		cont = cont + 1;
	}

	printf("Valor: %f %d\n", valor, cont);

	return 0;
}
