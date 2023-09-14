#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    char digitos[15];
    int dv1, dv2, i, j, igual;

    printf("Digite o seu cpf: \n");
    scanf("%s", digitos);

    while (strcmp(digitos, "000.000.000-00") != 0)
    {
        igual = 1;
        j = 0;
        for (i = 0; digitos[i] != '\0'; i++)
        {
            if (isdigit(digitos[i]))
                digitos[j++] = digitos[i];
        }
        digitos[j] = '\0';

        if (strlen(digitos) != 11)
            printf("CPF inválido. \n");
        else
        {
            for (i = 1; i < 11; i++)
            {
                if(digitos[i] != digitos[0])
                {
                    igual = 0;
                    break;
                }
            }
            if (igual)
                printf("CPF inválido. \n");
            else
            {
                dv1 = (digitos[0] - '0') * 1 + (digitos[1] - '0') * 2 + (digitos[2] - '0') * 3 + (digitos[3] - '0') * 4 + (digitos[4] - '0') * 5 + (digitos[5] - '0') * 6 + (digitos[6] - '0') * 7 + (digitos[7] - '0') * 8 + (digitos[8] - '0') * 9 ;
                dv1 = dv1 % 11;
                if ( dv1 >= 10)
                    dv1 = 0;

                dv2 = (digitos[0] - '0') * 11 + (digitos[1] - '0') * 10 + (digitos[2] - '0') * 9 + (digitos[3] - '0') * 8 + (digitos[4] - '0') * 7 + (digitos[5] - '0') * 6 + (digitos[6] - '0') * 5 + (digitos[7] - '0') * 4 + (digitos[8] - '0') * 3 + (digitos[9] - '0') * 2;
                dv2 = (dv2 * 10) % 11;
                if ( dv2 >= 10)
                    dv2 = 0;
                if (dv1 == (digitos[9] - '0') && dv2 == (digitos[10] - '0'))
                {
                    printf("CPF válido. \n");
                }
                else
                {
                    printf("CPF inválido. \n");
                    printf("Esperado: %d%d\n", digitos[9] - '0', digitos[10] - '0');
                    printf("Encontrado: %d%d\n", dv1, dv2);
                }
            }
        }
            printf("Digite o seu cpf: \n");
            scanf("%s", digitos);
    }
    return 0;
}