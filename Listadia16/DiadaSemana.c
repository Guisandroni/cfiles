#include <stdio.h>
#include <math.h>

int main (){
  int dia, mes, ano , s, a, diaSemana ,conta, mescont ;
  
  
  printf("Digite a data do seu aniversario (dd/mm/aa):\n ");
  scanf("%d %d %d", &dia ,&mescont ,&ano);
 // printf("você digitou a data: %d %d %d\n", dia, mes, ano);

 mes = mescont;
 if (mes == 1){
  mes = 11;
 } else if (mes ==2 ){
  mes = 12;
 } else if (mes ==3 ){
  mes = 1;
 } else if (mes ==4 ){
  mes = 2;
 } else if (mes ==5 ){
  mes = 3;
 } else if (mes ==6){
  mes = 4;
 } else if (mes ==7 ){
  mes = 5;
 } else if (mes ==8 ){
  mes = 6;
 } else if (mes ==9 ){
  mes = 7;
 } else if (mes ==10 ){
  mes = 8;
 } else if (mes ==11 ){
  mes = 9;
 } else if (mes ==12 ){
  mes = 10;
 } 

 //printf("valor de mes atual %d\n", mes);

conta = (2.6 * mes - 0.1);

 //printf("o valor truncado agora é: %d \n",conta);
 
 double c = trunc(conta);
 
 a = ano % 100;
 a = floor (a) ;
 s = ano / 100;
 s = trunc(s);
 //printf("valor do a ano: %d\n", a);

 diaSemana = c + dia + a + a/4 + s/4 - 2*s;
diaSemana = diaSemana % 7;
 if (diaSemana <= 0 ) {
    diaSemana = diaSemana + 7;
  } 
 //printf("Valor do dia da semana: %d\n",diaSemana);
if (diaSemana == 0){
  printf("%d/%d/%d: Domingo\n ",dia ,mescont, ano);
} else if (diaSemana == 1){
  printf("%d/%d/%d: Segunda-Feira\n ",dia ,mescont, ano);
}else if (diaSemana == 2){
  printf("%d/%d/%d: Terça-Feira\n ",dia ,mescont, ano);
}else if (diaSemana == 3){
  printf("%d/%d/%d: Quarta-Feira\n ",dia ,mescont, ano);
}else if (diaSemana == 4){
  printf("%d/%d/%d: Quinta-Feira\n ",dia ,mescont, ano);
}else if (diaSemana == 5){
  printf("%d/%d/%d: Sexta-Feira\n ",dia ,mescont, ano);
}else if (diaSemana == 6){
  printf("%d/%d/%d: Sábado\n ",dia ,mescont, ano);
}


return 0 ;
}