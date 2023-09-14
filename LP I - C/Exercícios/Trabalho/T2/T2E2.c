// Angelino Pires - RA: 0030481723015
// Bruno Hiroki - RA: 0030481723013
// Compilado pelo CygWin

#include <stdio.h>
#include <string.h>

void insertString(char *str1, char *str2, int posicao)
{
	int i = 0, cont = 0;
	int comprimento = strlen(str1) + strlen(str2);
	int compFinal = strlen(str1) - posicao;
	char restoStr1[compFinal];

	/* Guardar o fim da string 1 para ser reatribuida depois */
	for (i = posicao; i <= strlen(str1); ++i)
	{
		restoStr1[cont] = *(str1 + (posicao - 1) + cont);
		cont++;
	}

	/* Caso a posicao seja igual a ultima letra */
	if (posicao == strlen(str1)) 
	{
		restoStr1[0] = *(str1 + (posicao - 1));
	}
	cont = 0;
	/* Atribuicao da string 2 na string 1 */
	for (i = posicao - 1; i <= comprimento; ++i)
	{
		*(str1 + i) = *(str2 + cont);
		cont++;
	}

	cont = 0;
	/* Atribuicao do final da string 1 no resultado final */
	for (i = strlen(str1); i < comprimento; ++i)
    {
        *(str1 + i) = restoStr1[cont];
        restoStr1[cont] = ' ';
        cont++;
    }
}

/* Limpeza das arrays utilizadas */
void clearArray(char *str1, char *str2, int sizeStr1, int sizeStr2)
{
    int i;

	for (i = 0; i < sizeStr1; ++i)
	{
		*(str1 + i) = ' ';
	}

	for (i = 0; i < sizeStr2; ++i)
	{
		*(str2 + i) = ' ';
	}
}

void main ()
{
    int sizeStr1 = 0, sizeStr2 = 0, posicao = 1;
	char str1[31] = "", str2[31] = "";

	while (posicao > 0)
	{
	    sizeStr1 = 0;
        sizeStr2 = 0;

		printf("\nInsira duas strings de no maximo 15 caracteres abaixo: \n");
		scanf("%s %s", str1, str2);

        sizeStr1 = strlen(str1);
        sizeStr2 = strlen(str2);
		if (sizeStr1 > 15 || sizeStr2 > 15 )
		{
			printf("\nLimite de string excedida. Tente novamente!\n");
			clearArray(str1, str2, sizeStr1, sizeStr2);
		}
		else
		{
			printf("\nInsira uma posicao. Ou 0 para finalizar o programa: \n");
			scanf ("%i", &posicao);

			if (posicao > (sizeStr1 + 1))
			{
				printf("\n\nPosicao muito grande, tente novamente!\n\n");
			}
			else if (posicao > 0)
            {
                printf("\nPrimeira string: %s \nSegunda string: %s\n", str1, str2);
                insertString(str1, str2, posicao);
				printf("\n\nResultado: %s\n", str1);
				clearArray(str1, str2, sizeStr1, sizeStr2);
            }
		}
	}
}