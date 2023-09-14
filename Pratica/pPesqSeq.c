#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TRUE  1
#define FALSE 0

#define MAX_TAM 100000

int vetor[MAX_TAM];

int main()
{	int N, c, valor;

	#ifdef DEBUG
		double tInicio_ = clock();
	#endif

	scanf("%d", &N);

	/* Recebendo os elementos do vetor */
	for (c = 0; c < N; c++)
		scanf("%d", &vetor[c]);
	
	printf("\n\n\nInforme o valor a pesquisar: ");
	scanf("%d", &valor);
	
	c = 0;
	while (c < N && vetor[c] != valor)
		c = c + 1;
		
	if (c < N)
		puts("ACHOU");
	else
		puts("nao achaou");
			
	#ifdef DEBUG
		printf( "Tempo: %.1lf %.1lf\n", clock() - tInicio_, (clock() - tInicio_)/CLK_TCK ) ;
	#endif
	
	return 0;
}

