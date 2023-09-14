#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Prototipos das funcoes a serem criadas (NAO MEXA)*/
float sensacaoTerm(float, float);
float indiceCalor(float, float);
float grausF2grausC(float);
float grausC2grausF(float);

int main(void)
{	float temperatura, velVento, umidade, sensTerm, indCalor;
	char nivelAlerta[16];
	
	/* Entrada de dados */
	printf("Informe a temperatura (em graus C):\n");
	scanf("%f", &temperatura);
	
	printf("Informe a velocidade do vento (em Km/h):\n");
	scanf("%f", &velVento);
	
	printf("Informe a umidade relativa do ar (em %%):\n");
	scanf("%f", &umidade);
	
	/* Calculos (use as funcoes sugeridas) */
	sensTerm = sensacaoTerm(temperatura, velVento);
	
	/* Saida de dados */
	printf("\n\n\nResultados:\n");
	printf("Sensacao termica: %.1f graus centigrados\n", sensTerm);
	printf("Indice de calor : %.1f (%s)\n", indCalor, nivelAlerta);

	return 0;
}

/* Os corpos das funções devem ser escritos a seguir */

float sensacaoTerm(float T, float V)	// Calcula a Sensacao Termica
{	float resultado;

	resultado = 33 + (10 * sqrt(V) + 10.45 - V) * (T - 33) / 22;
	
	return resultado;
}
