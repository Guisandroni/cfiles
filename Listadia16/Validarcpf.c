#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main (){
char digitos [15];
 int dv1, dv2, i, igual = 1 ;

 


 printf("Digite o seu CPF: \n");
 scanf("%s", digitos);
 printf("Voce digitou o CPF: %s\n",digitos);
  if (strcmp(digitos, "000.000.000-00") == 0){
    return 0;
  }
 for (i = 1; i<14; i++){
    if(digitos[i] != digitos[0]){
      igual = 0;
      break;
    }
 } if (igual){
    printf("O CPF possui digitos iguais\n");
 }  else {
  printf("O CPF  não possui digitos iguais,\n");
 } 

if (strlen(digitos) != 14){
  printf("o CPF digitado é invalido!!\n");
  return 0;
} else {
  printf("o CPF digitado é valido\n");
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
printf("Esperado: %d%d\n", dv1,dv2);
printf("Encontrado: %d%d\n", dv1,dv2 );
return 0 ;
}