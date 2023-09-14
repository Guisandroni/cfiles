// Angelino Pires - RA: 0030481723015
// Bruno Hiroki - RA: 0030481723013
// Compilado pelo Cygwin

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void cleanIt(char *destino);
void substring(char *entrada,char *saida, int comeco, int fim);
void getClassPeriod(char *entrada, char *saida);
void isItNumeric(char *entrada, char *saida, int quantidade);
void onlyNumbers (char *entrada, char *saida);
void getSumOfDots (char *entrada, char *saida);
void jumpLine(int linhas);
void randomNumberAddRight(char *entrada, char *entradaUsuario, int n_rodada, int jogador);
void delay(int milli_seconds);

/* Exercicio 1*/
void novoRA(char *raVelho, char *raNovo, char *curso)
{
	strncpy(curso, raVelho, 2);
	int comprimento = strlen(raNovo);
	char temp[comprimento];
	cleanIt(temp);
	/* Aplicar verificações melhores em cada curso */
	switch (*curso)
	{
		case 'A':
			strcpy(curso, "048"); /* ADS */
            break;

        case 'S':
            strcpy(curso, "061"); /* Sistemas Biomedicos */
            break;

        case 'L':
            strcpy(curso, "074"); /* Logistica */
            break;

		case 'O':
			strcpy(curso, "100"); /* Fabricacao Mecanica */
			break;

		/* Testando formas de pegar a segunda letra*/
        case 'P':
			if (*(curso+1) == 'L') {
				strcpy(curso, "080"); /* Polimeros */
				
			} else if ((*(curso+1) == 'D') || (*(curso+1) == 'N')) {
				strcpy(curso, "099"); /* Projetos Mecanicos */
			}
			break;

        default:
            printf("\nCurso nao existe!\n\n");
            break;
	}

    strcat(raNovo, "003");
	strcat(raNovo, curso);
	substring(raVelho, temp,3,5);
	strcat(raNovo, temp);
	getClassPeriod(raVelho,raNovo);
	cleanIt(temp);
	substring(raVelho,temp,6,8);
	strcat(raNovo,temp);

}

/* Exercicio 1 */
void getClassPeriod(char *entrada,char *saida){
	//Pega o período de aula
	char temporario[1];
	substring(entrada,temporario,2,2);
	switch (temporario[0])
	{
		case 'N':
			strcat(saida, "3");
            break;
		case 'D':
			strcat(saida, "1");
            break;
		case 'L':
			strcat(saida, "2");
            break;
    }
}

/* Limpa qualquer array */
void cleanIt(char *destino){

	int comprimento = strlen(destino);
	for (int i = 0; i < comprimento; ++i)
	{
		*(destino+i) = ' ';
	}
}

void substring(char *entrada,char *saida, int comeco, int fim)
{
	int comprimento = strlen(entrada);
	cleanIt(saida);
	for (int i = comeco; i <= fim; ++i)
	{
		*(saida+i-comeco) = *(entrada+i -1);
	}
}

/* Exercicio 3 */
void isItNumeric(char *entrada, char *saida, int quantidade){
	int comprimento = strlen(entrada), contadigitos = 0;
	cleanIt(saida);
	for (int i = 0; i < comprimento; ++i)
	{
		if (contadigitos>=quantidade)
		{
			break;
		}
		if (isdigit(*(entrada+i)) != 0)
		{
			*(saida+contadigitos) = *(entrada+i);
			contadigitos++;
		}
	}
}

/* Exercicio 3 */
void getSumOfDots (char *entrada, char *saida){
	int comprimento = strlen(entrada);
	cleanIt(saida);
	int centavos = 0, reais = 0, finalcentavos = 1;
	char stringSoma[comprimento];
	cleanIt(stringSoma);
	for (int i = 0; i < comprimento; ++i)
	{
		if(*(entrada+i) == 46)
		{
			cleanIt(stringSoma);
			substring(entrada,stringSoma,finalcentavos,i);
			reais = reais + atoi(stringSoma);
			cleanIt(stringSoma);
			substring(entrada, stringSoma,i+2,i+3);
			centavos = centavos + atoi(stringSoma);
			i = i+2;
			finalcentavos = i + 2;
		}
	}
	for (int i = comprimento; i >0; --i)
	{
		if(*(entrada+i) == 46 && ((comprimento - i) > 2))
		{
			cleanIt(stringSoma);
			substring(entrada,stringSoma,i+4,comprimento);
			reais = reais + atoi(stringSoma);
			break;
		}
	}
	while (centavos > 100)
	{
		centavos = centavos - 100;
		reais++;
	}
	printf(" Soma: %d.%d\n",reais, centavos);
}

/* Exercicio 3 */
void onlyNumbers (char *entrada, char *saida){

	int comprimento = strlen(entrada), contadigitos = 0;
	cleanIt(saida);
	for (int i = 0; i < comprimento; ++i)
	{
		if(isdigit(*(entrada+i)) != 0)
		{
			*(saida+contadigitos) = *(entrada+i);
			contadigitos++;
		}
		if(*(entrada+i) == 46 && (i>10))
		{
			*(saida+contadigitos) = 46;
			contadigitos++;
		}
	}
}

void jumpLine(int linhas)
{
	for (int i = 0; i < linhas ; ++i)
	{
		printf("\n");
	}
}

/* Exercicio 4*/
void randomNumberAddRight(char *entrada, char *entradaUsuario, int n_rodada, int jogador)
{
	int comprimento = strlen(entrada),numero_aleatorio = 0;
	char str_temp[1] = "0";
	numero_aleatorio = rand() % 9;
	system("clear");
	printf("Sua vez ** JOGADOR %d ** -> Estamos na rodada %d\n\n", jogador, n_rodada);
	sprintf(str_temp, "%d", numero_aleatorio);
	printf("Memorize esse número: %s\n", str_temp);
	strcpy((entrada + n_rodada - 1),str_temp);
	delay(2000);
	system("clear");
}
/* Exercicio 4 */
void delay(int milli_seconds)
{
  	clock_t start_time = clock();
 	while (clock() < start_time + milli_seconds);
}