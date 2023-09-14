#include <stdio.h>
#include <string.h>

void substringRA (char *RA, char *Curso, int inicio, int fim) {
	int cont = 0, i = 0;

	for (i = (inicio - 1); i < fim; i++) {
		*(Curso + cont) = *(RA + (inicio - 1) + cont);
		cont++;
	}
}

void clearArray(char *curso) {
	int comprimento = strlen(curso);

	for (int i = 0; i < comprimento; i++) {
		*(curso + i) = ' ';
	}
}	