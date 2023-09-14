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
    printf("Voce digitou o cpf: %s\n",digitos);
        if (strlen(digitos) <11){
            sprintf(digitos, "%011d", atoi(digitos));
        }
    while (strcmp(digitos, "000.000.000-00") != 0)
    {
        igual = 1;
       for (i = 0, j = 0; digitos[i] != '\0'; i++)
        {
        if (digitos[i] >= 0 && digitos[i] <= 0)
            digitos[j++] = digitos[i];
        }
       for (i = 1; i<11; i++)
        {
        if(digitos[i] != digitos[0])
            igual = 0;
            
        }
        if (igual)
        printf("CPF inválido. \n");

    if (strlen(digitos) != 14){
        printf("CPF inválido. \n");
    }
    
   

    dv1 = (digitos[0] - '0') * 1 + (digitos[1] - '0') * 2 + (digitos[2] - '0') * 3 + (digitos[4] - '0') * 4 + (digitos[5] - '0') * 5 + (digitos[6] - '0') * 6 + (digitos[8] - '0') * 7 + (digitos[9] - '0') * 8 + (digitos[10] - '0') * 9 ;
dv1 = dv1 % 11;
if ( dv1 >= 10){
  dv1 = 0;
}

 dv2 = (digitos[0] - '0') * 11 + (digitos[1] - '0') * 10 + (digitos[2] - '0') * 9 + (digitos[4] - '0') * 8 + (digitos[5] - '0') * 7 + (digitos[6] - '0') * 6 + (digitos[8] - '0') * 5 + (digitos[9] - '0') * 4 + (digitos[10] - '0') * 3 + (digitos[12] - '0') * 2;
dv2 = (dv2 * 10) % 11;
if ( dv2 >= 10){
  dv2 = 0;
}
    

    if (digitos[9] - '0' != dv1 || digitos[10] - '0' != dv2)
    {
    printf("CPF inválido. \n");
    printf("Esperado: %d%d\n", dv1, dv2);
    printf("Encontrado: %d%d\n", dv1, dv2 );
    }
    else
        printf("CPF válido. \n");

    printf("Digite o seu cpf: \n");
    scanf("%s", digitos);

    }
    return 0;
}