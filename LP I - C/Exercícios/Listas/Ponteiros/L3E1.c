#include <stdio.h>
#include <string.h> 	
#include "substringRA.c"

int main () {
	int RA = 0, Curso = 0;
	char ArrayRA[100];
	char ArrayCurso[100];

	printf ("\nInsira seu RA: \n");
	scanf ("%s", ArrayRA);

	printf ("\nInsira uma posicao inicial e outra final: \n");
	scanf ("%i %i", &RA, &Curso);

	clearArray(ArrayCurso);
	substringRA(ArrayRA, ArrayCurso, RA, Curso);

	printf("\n%s", ArrayCurso);
}