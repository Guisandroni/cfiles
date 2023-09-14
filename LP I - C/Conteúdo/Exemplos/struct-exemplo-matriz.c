#include <stdio.h>

struct Produto
{ 
  int codigo;
  char nome[31];
  float valor;  
};

int main()
{
  struct Produto vetprod[4];
  struct Produto varprod;
  int x;  
  
  int i;
  
  for (i=0;i<4;i++)
  {
     printf("Informe um codigo: ");
	 //scanf("%d",&vetprod[i].codigo);
	 scanf("%d",&(vetprod+i)->codigo);
	 printf("Informe um nome: ");
	 scanf("%s",vetprod[i].nome);
	 printf("Informe um valor: ");
	 scanf("%f",&vetprod[i].valor); 
  }
  for (i=0;i<4;i++)
  {  
	 printf("\n%4d %20s %.2f",
	 (vetprod+i)->codigo,
	 (vetprod+i)->nome,
	 (vetprod+i)->valor); 
  }
  
}