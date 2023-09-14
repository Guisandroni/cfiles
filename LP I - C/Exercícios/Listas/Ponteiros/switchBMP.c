#include <stdio.h>
#include <string.h>

// OK
void clearArray(char *arrayOut, int comprimento) {
	int i;

	for (i = 0; i < comprimento; i++) {
		*(arrayOut + i) = ' ';
	}
}

// Testando
int switchBMP (char *imagem, char *arrayOut, int comprimento) {
	int i, out = 0;

	strcpy(arrayOut, imagem);
	for (i = 0; i < comprimento; i++) {
		if ( *(arrayOut + i) == '.') {
			*(arrayOut + i + 1) = 'g';
			*(arrayOut + i + 2) = 'i';
			*(arrayOut + i + 3) = 'f';

		} else {
            out = 1;
		}
	}
	return out;
}
