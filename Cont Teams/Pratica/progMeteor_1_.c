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
	indCalor = indiceCalor(temperatura, umidade);
	
	/* Determinando o nivel de alerta */
	if (indCalor <= 27.0)
		strcpy(nivelAlerta, "Normal");
	else
		if (indCalor <= 32.0)
			strcpy(nivelAlerta, "Cautela");
		else
			if (indCalor <= 41.0)
				strcpy(nivelAlerta, "Cautela extrema");
			else
				if (indCalor <= 54.0)
					strcpy(nivelAlerta, "Perigo");
				else
					strcpy(nivelAlerta, "Perigo extremo");
	
	/* Saida de dados */
	printf("\n\n\nResultados\n");
	printf("\tSensacao termica: %.1f graus centigrados\n", sensTerm);
	printf("\tIndice de calor : %.1f (%s)\n", indCalor, nivelAlerta);

	return 0;
}

/* Os corpos das funções devem ser escritos a seguir */

float sensacaoTerm(float T, float V)	// Calcula a Sensacao Termica
{	float resultado;

	resultado = 33 + (10 * sqrt(V) + 10.45 - V) * (T - 33) / 22;
	
	return resultado;
}

float grausF2grausC(float tempF)	// Converte graus Fahrenheit para Celsius
{	float resultado;

	resultado = (tempF - 32.0) * (5.0 / 9.0);
	
	return resultado;
}

float grausC2grausF(float tempC)	// Converte graus Celsius para Fahrenheit
{	float resultado;

	resultado = tempC * 9.0 / 5.0 + 32.0;

	return resultado;
}

float indiceCalor(float tempC, float RH)	// Calcula o Indice de Calor
{	float resultado, T, HI1;

	T = grausC2grausF(tempC);	// Calculo usa temperatura em graus F
	
	HI1 = 1.1 * T - 10.3 + 0.047 * RH;
	
	if (HI1 < 80.0)
		resultado = HI1;
	else
	{	HI1 = - 42.379 + 2.04901523 * T + 10.14333127 * RH
			  - 0.22475541 * T * RH - 6.83783 * 0.001 * pow(T, 2)
			  - 5.481717 * 0.01 * pow(RH, 2) 
			  + 1.22874 * 0.001 * pow(T, 2) * RH
			  + 8.5282 * 0.0001 * T * pow(RH, 2)
			  - 1.99 * 0.000001 * pow(T, 2) * pow(RH, 2);
			  
		if (T >= 80.0 && T <= 112.0 && RH <= 13.0)
			resultado = HI1 - (3.25 - 0.25 * RH) * pow((17 - abs(T - 95)) / 17, 0.5);
		else
			if (T >= 80.0 && T <= 87.0 && RH > 85.0)
				resultado = HI1 + 0.02 * (RH - 85) * (87 - T);
			else
				resultado = HI1;
	}
	
	resultado = grausF2grausC(resultado);	// Resultado esperado em graus C

	return resultado;
}
