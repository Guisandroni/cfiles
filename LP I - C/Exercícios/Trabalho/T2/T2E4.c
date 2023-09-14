// Angelino Pires - RA: 0030481723015
// Bruno Hiroki - RA: 0030481723013
// Compilado pelo Cygwin

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "function_RA.c"

void main()
{
	int inicio = 0, erro = 0, sessao[3][2], rodada, casa = 0;
	char numeroJ1[256],numeroJ2[256], inputUsuarioJ1[256],inputUsuarioJ2[256];
	time_t t;

 	inicio = 0;
	while (inicio != 1)
	{
		system("clear");
		printf("Bem vindo ao jogo de memorização");
		jumpLine(2);	
		printf("Pressione 1 para iniciar o jogo: ");
		scanf("%d",&inicio);
		cleanIt(numeroJ1);
		cleanIt(numeroJ2);
	}
	rodada = 1;
	do
	{
		srand((unsigned) time(&t));
		
		// Player 1
		randomNumberAddRight(numeroJ1, inputUsuarioJ1, rodada, 1);
		printf("\nQual número estava na tela e seus anteriores?: ");
		cleanIt(inputUsuarioJ1);
		scanf("%s", inputUsuarioJ1);
		if (strcmp(inputUsuarioJ1,numeroJ1) != 0)
		{
			printf("Errado! \n\nO numero correto é: %s\n\n", numeroJ1);
			casa = strlen(numeroJ1);
			printf("\nO jogador 1 errou na casa %d\n", casa);	
			erro = 2;
			break;
		}

		// Player 2
		randomNumberAddRight(numeroJ2, inputUsuarioJ2, rodada, 2);
		printf("\nQual número estava na tela e seus anteriores?: ");
		cleanIt(inputUsuarioJ2);
		scanf("%s", inputUsuarioJ2);
		if (strcmp(inputUsuarioJ2,numeroJ2) != 0)
		{
			printf("Errado! \n\nO numero correto é: %s\n\n", numeroJ2);
			casa = strlen(numeroJ2);
			printf("\nO jogador 2 errou na casa %d\n", casa);
			erro = 1;
			break;
		}
		rodada++;
	}
	while(erro == 0);

	printf("O jogador ganhador foi o: %d!\n", erro);
	printf("Foram memorizadas %d casas!\n", rodada-1);
}