#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (void)
{	long long int vRA;
	int vEscola, vSeq;
	
	printf("Informe o RA:\n");
	scanf("%lld", &vRA);
	
	printf("\n\n\n\nO RA informado foi: %lld\n", vRA);

	vEscola = vRA / 10000000000;
	vSeq = vRA % 100;
	
	printf("\nEscola: %03d		Seq.: %03d\n", vEscola, vSeq);
	
	return 0;
}
