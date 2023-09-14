#include <stdio.h>
#include <string.h>
#include "switchBMP.c"


void main () {
	char imagemBMP[100];
	int comprimento = strlen(imagemBMP);
	char arrayOut[comprimento], continuar[4] = "";

	while (strcmp(continuar,"FIM") != 0) {

		printf ("\nInsira sua imagem com extensao .bmp abaixo: \n");
		scanf ("%s", imagemBMP);

		clearArray(arrayOut, comprimento);

		// Testando
        if (switchBMP(imagemBMP, arrayOut, comprimento) == 0) {
            printf("\nSua imagem foi convertida com sucesso!\n %s \n", arrayOut);

        } else {
            printf("\nInsira um arquivo imagem.bmp! Tente novamente.\n");
        }

		printf("Se deseja encerrar o programa digite FIM: ");
		scanf("%s", continuar);

	}
}
