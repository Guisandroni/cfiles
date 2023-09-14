/*1- Fazer um programa que peça ao usuário o CEP
 no formato 99999-999. Caso o CEP esteja invalido
 (use a função do item 2) pedir novamente.
*/
#include <stdio.h>
#include <string.h>

int validaCEP(char cep[10])
{
   int x;
   int tam;
   tam=strlen(cep);
   //printf("\n---> tam: %i",tam);
   // validar-
   if (cep[5] != '-')
   {
      //printf("\nCar: ---> %c",cep[5]);
	  return 0;
   }
   else
   // tamanho
   if (tam != 9)
   {     
	 return 0;
   }
   else 
   // validar caracteres numericos
   {
      for (x=0;x<9;x++)
	  {
	    // printf("\n----%i",cep[x]);
		 // se digitou diferente de numeros
		 if (cep[x] < 48 || cep[x] > 57)
		    // se x != 5 
		    if (x != 5) 
		      return 0;
	  }
	  
   }
   return 1;
}

int main()
{
   int retorno, i=0;
   char cep[10];
   char cidade[3];
   char nome[3][2][30]={{"18","Sorocaba"},
                        {"10","Piedade"},
          				{"12","Salto"}};		
   
   printf("Informe um CEP (99999-999)");
   scanf("%s",cep);
   retorno = validaCEP(cep);
   if (retorno==0)
     printf("\nErro --> digite o CEP corretamente");
   else	 
   {
      cidade[0]=cep[0];
	  cidade[1]=cep[1];
	  cidade[2]='\0';
	  printf("\n\nCodigo da Cidade: %s",cidade);
	  for (i=0;i<3;i++)
	    if (strcmp(nome[i][0],cidade) == 0)
		   printf(": %s",nome[i][1]);
     //printf("\nOK");
	 
   }
}



/*2-Crie uma função que valide o CEP
 2.1->verificar se o '-' está na posição correta
 2.2->verificar se foi digitada a qtde correta de char.
 2.3->verificar se só foram digitados caracteres numéricos (exceto -)
 2.4->a função deverá retornar 0 se o CEP estiver com
      erro e 1 se estiver ok

3-Os dois primeiros dígitos correspondem à cidade.
  Pesquisar numa matriz tridimensional o código da 
  cidade e retornar o nome.
  
*/
	  
