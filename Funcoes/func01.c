#include  <stdio.h>
#include  <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int calculoimc (float peso, float altura);

int main () {
float peso, altura, imc;
  printf("Vamos calcular seu IMC!\n");
  printf("digite sua altura: \n");
  scanf("%f",&altura); //digitar altura como : 1.80
  printf("digite seu peso: \n");
  scanf("%f",&peso);

  imc = calculoimc (peso,altura);

if (imc <= 17){
  printf("O seu imc é: %f , peso muito abaixo do ideal",imc);
} else if (imc >= 17 && imc <= 18.49){
    printf("O seu imc é: %f , peso abaixo do ideal",imc);
} else if (imc >= 18.5 && imc <= 24.99){
    printf("O seu imc é: %f , peso normal ",imc);
} else if (imc >= 25 && imc <= 29.99){
    printf("O seu imc é: %f , acima do peso ",imc);
} else if (imc >= 30 && imc <= 34.99){
    printf("O seu imc é: %f , Obesidade grau 1 ",imc);
} else if (imc >= 35 && imc <= 39.99){
    printf("O seu imc é: %f , Obesidade grau 2 ",imc);
}else if (imc >= 40){
    printf("O seu imc é: %f , Obesidade grau 3 ",imc);
}

 

  return 0;
}

int calculoimc (float peso, float altura){
   return  peso / (altura * altura);
}