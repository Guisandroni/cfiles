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
{	int N, c, x, aux, menor;

	#ifdef DEBUG
		double tInicio_ = clock();
	#endif

	scanf("%d", &N);
	
	/* Recebendo os elementos do vetor */
	for (c = 0; c < N; c++)
		scanf("%d", &vetor[c]);
		
	/* Ordenando pelo metodo da Selecao Direta */
	c = 0;
	while (c < N)
	{	menor = c;
		x = c + 1;
		while (x < N)
		{	if (vetor[x] < vetor[menor])
				menor = x;
			
			x = x + 1;
		}
		
		aux = vetor[c];
		vetor[c] = vetor[menor];
		vetor[menor] = aux;
		
		c = c + 1;
	}
	
	/* Imprimindo o vetor ordenado */
	for (c = 0; c < N; c++)
		printf("%d\n", vetor[c]);
	
	#ifdef DEBUG
		printf("Tempo: %.1lf %.1lf\n", clock() - tInicio_, (clock() - tInicio_)/CLK_TCK);
	#endif
	
	return 0;
}
