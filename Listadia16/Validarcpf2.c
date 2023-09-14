#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main (){
char digitos [15];
 int dv1, dv2;


 printf("Digite o seu cpf: \n");
 scanf("%s", digitos);
 printf("Voce digitou o cpf: %s\n",digitos);
  if (strcmp(digitos, "00000000000") == 0){
    return 0;
  }
 
if(strlen(digitos) != 14){
  printf("CPF inválido");
  return 0;
}
        
    else if((strcmp(digitos,"000.000.000-00") == 0) || (strcmp(digitos,"111.111.111-11") == 0) || (strcmp(digitos,"222.222.222-22") == 0) ||
            (strcmp(digitos,"333.333.333-33") == 0) || (strcmp(digitos,"444.444.444-44") == 0) || (strcmp(digitos,"555.555.555-55") == 0) ||
            (strcmp(digitos,"666.666.666-66") == 0) || (strcmp(digitos,"777.777.777-77") == 0) || (strcmp(digitos,"888.888.888-88") == 0) ||
            (strcmp(digitos,"999.999.999-99") == 0))
            {
  printf("CPF inválido");
  return 0 ;
}
            
            



dv1 = (digitos[0] - '0') * 1 + (digitos[1] - '0') * 2 + (digitos[2] - '0') * 3 + (digitos[4] - '0') * 4 + (digitos[5] - '0') * 5 + (digitos[6] - '0') * 6 + (digitos[8] - '0') * 7 + (digitos[9] - '0') * 8 + (digitos[10] - '0') * 9 ;
dv1 = dv1 % 11;
if ( dv1 >= 10){
  dv1 = 0;
}
//printf("Valor do digito verificador 01 é: %d\n", dv1);
dv2 = (digitos[0] - '0') * 11 + (digitos[1] - '0') * 10 + (digitos[2] - '0') * 9 + (digitos[4] - '0') * 8 + (digitos[5] - '0') * 7 + (digitos[6] - '0') * 6 + (digitos[8] - '0') * 5 + (digitos[9] - '0') * 4 + (digitos[10] - '0') * 3 + (digitos[12] - '0') * 2;
dv2 = (dv2 * 10) % 11;
if ( dv2 >= 10){
  dv2 = 0;
}
//printf("Valor do digito verificador 02 é: %d\n", dv2);
printf("CPF Válido\n");
printf("Esperado: %d%d\n", dv1,dv2);
printf("Encontrado: %d%d\n", dv1,dv2 );
return 0 ;
}