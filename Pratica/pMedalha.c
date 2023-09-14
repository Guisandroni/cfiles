/*
	Codigo basico para o problema do Quadro de Medalhas.
	Dá pra melhorar bastante o código. 
	Se usar qsort(), o código fica mais enxuto e o desempenho melhora
	um pouco.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TRUE  1
#define FALSE 0
#define MAX_TAM 500

struct pais{ char nome[100]; int ouro, prata, bronze;};
typedef struct pais TPais;

TPais vetor[MAX_TAM];

int main(void)
{	int N, c, x, maior;
	TPais aux;

	/* Recebendo os dados da entrada */
	scanf("%d", &N);
	
	c = 0;
	while (c < N)
	{	scanf("%s %d %d %d", vetor[c].nome, &vetor[c].ouro, 
							 &vetor[c].prata, &vetor[c].bronze);
							 
		c = c + 1;
	}
	
	/* Ordenando pelo metodo da Selecao Direta */
	c = 0;
	while (c < N)
	{	maior = c;
		x = c + 1;
		while (x < N)
		{	if (vetor[x].ouro > vetor[maior].ouro)
				maior = x;
			else
				if (vetor[x].ouro == vetor[maior].ouro && 
					vetor[x].prata > vetor[maior].prata)
					maior = x;
				else
					if (vetor[x].ouro == vetor[maior].ouro && 
						vetor[x].prata == vetor[maior].prata &&
						vetor[x].bronze > vetor[maior].bronze)
						maior = x;
					else
						if (vetor[x].ouro == vetor[maior].ouro && 
							vetor[x].prata == vetor[maior].prata &&
							vetor[x].bronze == vetor[maior].bronze &&
							strcmp(vetor[x].nome, vetor[maior].nome) < 0)
							maior = x;
			
			x = x + 1;
		}
		
		aux = vetor[c];
		vetor[c] = vetor[maior];
		vetor[maior] = aux;
		
		c = c + 1;
	}	
	
	/* Imprime o resultado */
	c = 0;
	while (c < N)
	{	printf("%s %d %d %d\n", vetor[c].nome, vetor[c].ouro,
								vetor[c].prata, vetor[c].bronze);
								
		c = c + 1;
	}
	
	return 0;
}
