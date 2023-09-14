/*
	Arquivo cliente que utiliza o TDA Racional.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
TRac SimplRac(TRac);

int main(void)
{	TRac X, Y, R, b;

	printf("Informe X: ");
	scanf("%d/%d", &X.num, &X.den);
	
	printf("Informe Y: ");
	scanf("%d/%d", &Y.num, &Y.den);
	
	R = SomaRac(X, Y);	
	printf("\n%d/%d + %d/%d = %d/%d\n", X.num, X.den,
										Y.num, Y.den,
										R.num, R.den);
	R = SubtraiRac(X, Y);	
	printf("\n%d/%d - %d/%d = %d/%d\n", X.num, X.den,
										Y.num, Y.den,
										R.num, R.den);
	R = MultRac(X, Y);	
	printf("\n%d/%d * %d/%d = %d/%d\n", X.num, X.den,
										Y.num, Y.den,
										R.num, R.den);
	R = DivRac(X, Y);	
	printf("\n%d/%d / %d/%d = %d/%d\n", X.num, X.den,
										Y.num, Y.den,
										R.num, R.den);
	b = R;
	R = SimplRac(b);
	printf("\n%d/%d = %d/%d\n", b.num, b.den,
								R.num, R.den);
								
	return 0;
}
