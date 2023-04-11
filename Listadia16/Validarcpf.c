#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
char digitos [15];
 int dv1, dv2;

 printf("Digite o seu cpf: \n");
 scanf("%s", digitos);
 printf("Voce digitou o cpf: %s\n",digitos);

if (strlen(digitos) != 11){
  printf("Cpf digitado é invalido\n");
  return 0;
} else {
  printf("Cpf digitado é valido\n");
}

dv1 = (digitos[0] - '0') * 1 + (digitos[1] - '0') * 2 + (digitos[2] - '0') * 3 + (digitos[3] - '0') * 4 + (digitos[4] - '0') * 5 + (digitos[5] - '0') * 6 + (digitos[6] - '0') * 7 + (digitos[7] - '0') * 8 + (digitos[8] - '0') * 9 ;
dv1 = dv1 % 11;
if ( dv1 >= 10){
  dv1 = 0;
}
printf("Valor do digito verificador 01 é: %d\n", dv1);
dv2 = (digitos[0] - '0') * 11 + (digitos[1] - '0') * 10 + (digitos[2] - '0') * 9 + (digitos[3] - '0') * 8 + (digitos[4] - '0') * 7 + (digitos[5] - '0') * 6 + (digitos[6] - '0') * 5 + (digitos[7] - '0') * 4 + (digitos[8] - '0') * 3 + (digitos[9] - '0') * 2;
dv2 = dv2 % 11;
if ( dv2 >= 10){
  dv2 = 0;
}
printf("Valor do digito verificador 02 é: %d\n", dv2);

return 0 ;
}