//
// Ordena vetor de inteiros com qsort
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#include <ctype.h>
#include <limits.h>
#include <time.h>

#define TRUE  1
#define FALSE 0

#define MIN( a, b ) ((a)<(b) ?  (a) : (b))
#define MAX( a, b ) ((a)>(b) ?  (a) : (b))
#define ABS( a ) 	((a)< 0  ? -(a) : (a))
#define IMPAR( a )	((a)&1)
#define CTOI( a )	((a) - '0')
#define ITOC( a )	((a) + '0')

#define MAX_TAM 100000

int vetor[MAX_TAM];

int compara(const void *p1, const void *p2)
{	int *i = (int *)p1, *j = (int *)p2;

	if (*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}

int main()
{	int N, c;
	
	#ifdef DEBUG
		double tInicio_=clock() ;
	#endif

	scanf("%d", &N);
	
	for (c = 0; c < N; c++)
		scanf("%d", &vetor[c]);
	
	qsort(vetor, N, sizeof(int), compara);
	
	for (c = 0; c < N; c++)
		printf("%d\n", vetor[c]);
	
	#ifdef DEBUG
		printf( "Tempo: %.1lf %.1lf\n", clock() - tInicio_, (clock() - tInicio_)/CLK_TCK ) ;
	#endif
	
	return 0;
}
