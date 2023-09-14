#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAM	100000

struct regPresente {int id, volume;};
typedef struct regPresente TPresente;

TPresente presentes[MAX_TAM];

int main(void)
{	int T, N, K, H, W, L, caso, c, maior, x;
	TPresente aux;
	
	scanf("%d", &T);
	
	caso = 0;
	while (caso < T)
	{	/* Fazendo a entrada de dados do caso */
		scanf("%d %d", &N, &K);
		
		c = 0;
		while (c < N)
		{	scanf("%d %d %d %d", &presentes[c].id, &H, &W, &L);
			presentes[c].volume = H * W * L;
			
			c = c + 1;
		}
		
		// ordenar o vetor pelo volume, em ordem decrescente
		c = 0;
		while (c < N)
		{	maior = c;
			x = c + 1;
			while (x < N)
			{	if (presentes[x].volume > presentes[maior].volume)
					maior = x;
			
				x = x + 1;
			}
		
			aux = presentes[c];
			presentes[c] = presentes[maior'];
			presentes[maior] = aux;
		
			c = c + 1;
		}

		/* Exibindo o resultado */
		printf("%d", presentes[0].id);
		
		c = 1;
		while (c < K)
		{	printf(" %d", presentes[c].id);
			c = c + 1;
		}
		printf("\n");
		
		caso = caso + 1;
	}

	return 0;
}
