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
{	int N, c, aux, pivo;

	#ifdef DEBUG
		double tInicio_ = clock();
	#endif

	scanf("%d", &N);

	/* Recebendo os elementos do vetor */
	for (c = 0; c < N; c++)
		scanf("%d", &vetor[c]);
		
	/* Ordenando pelo metodo da Insercao Direta */
	pivo = 1;
	while (pivo < N)
	{	aux = vetor[pivo];
		c = pivo - 1;
		
		while (c >= 0 && vetor[c] > aux)
		{	vetor[c + 1] = vetor[c];
			c = c - 1;
		}
		
		vetor[c + 1] = aux;
		pivo = pivo + 1;
	}
	
	/* Imprimindo o vetor ordenado */
	for (c = 0; c < N; c++)
		printf("%d\n", vetor[c]);
	
	#ifdef DEBUG
		printf("Tempo: %.1lf %.1lf\n", clock() - tInicio_, (clock() - tInicio_)/CLK_TCK);
	#endif
	
	return 0;
}
