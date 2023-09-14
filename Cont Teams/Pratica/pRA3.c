/*
	Manipulação de um RA representado em formato numérico.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (void)
{	long long int vRA, aux;
	int vEscola, vCurso, vAno, vSem, vTurno, vSeq;
	
	printf("Informe o RA:\n");
	scanf("%lld", &vRA);
	
	printf("\n\nO RA informado foi: %lld\n", vRA);

	aux = vRA;
	
	vEscola = aux / 10000000000;
	aux = aux % 10000000000;
	vCurso = aux / 10000000;
	aux = aux % 10000000;
	vAno = aux / 100000;
	aux = aux % 100000;
	vSem = aux / 10000;
	aux = aux % 10000;
	vTurno = aux / 1000;
	aux = aux % 1000;
	vSeq = aux;
	
	
	printf("Escola: %03d\n", vEscola);
	printf("Curso : %03d\n", vCurso);
	printf("Ano ..: %02d\n", vAno);
	printf("Sem ..: %d\n", vSem);
	printf("Turno : %d\n", vTurno);
	printf("Seq ..: %03d\n", vSeq);
	
	return 0;
}
