#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE  1
#define FALSE 0

#define MAX_TAM 1000

int vetor[MAX_TAM];

int main(void)
{	int N, c, x, aux, menor;

	scanf("%d", &N);
	
	for (c = 0; c < N; c++)
		scanf("%d", &vetor[c]);
		
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
	
	for (c = 0; c < N; c++)
		printf("%d\n", vetor[c]);
	
	return 0;
}
