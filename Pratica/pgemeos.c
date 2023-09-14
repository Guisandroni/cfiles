#include <stdio.h>

void GeraPrimos();
int primo(int);
int ConteGemeos(int, int);

int primos[3000000];

int main(void)
{	int N, A, B, c;

	GeraPrimos();
	
	scanf("%d", &N);
	
	c = 0;
	while (c < N)
	{	scanf("%d %d", &A, &B);
	
		qtde = ConteGemeos(A, B);
		
		printf("%d\n", qtde);
		c = c + 1;
	}
	
	return 0;
}

void GeraPrimos(void)
{	int i, c = 0;

	for (i = 0; i < 10000000; i++)
	{	if (primo(i))
		{	primos[c] = i;
			c = c + 1;
		}
	}
}

int primo(int n)
{
}

int ConteGemeos(int A, int B)
{
}
