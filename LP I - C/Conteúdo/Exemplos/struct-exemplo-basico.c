#include <stdio.h>

typedef struct Data
{
	int dia;
	int mes;
	int ano;
} Data;

struct produto
{
	int codigo;
	char nome[51];
	float preco;
	int qtde;
	Data dtnasc;
};

int main()
{
  struct produto varprod1, varprod2;  
  struct produto vetprod[10];
  struct produto *prod;
  
  int num;
   
  printf("Nome do produto: ");
  scanf("%s",varprod1.nome);
  printf("Numero: ");
  scanf("%i",&varprod1.codigo);
  printf("Informe a data: ");
  scanf("%i/%i/%i", &varprod1.dtnasc.dia,&varprod1.dtnasc.mes,&varprod1.dtnasc.ano);
  
  vetprod[0]=varprod1;  
  
  printf("\nNome: %s",varprod1.nome);
  printf("\nNumero: %d",varprod1.codigo);
  printf("\n%i/%i/%i",varprod1.dtnasc.dia,varprod1.dtnasc.mes,varprod1.dtnasc.ano);
  
  printf("\nNome no vetor: %s",vetprod[0].nome);
  
  //ponteiro
  prod=&varprod1;
  
  printf("\nNome através de ponteiro: %s",prod->nome);
  
  
}