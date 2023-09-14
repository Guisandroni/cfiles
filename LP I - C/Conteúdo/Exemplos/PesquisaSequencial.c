#include <stdio.h>
#include <string.h>

typedef struct {
// defini��o da estrutura de cada ficha na tabela
  int NumBI;
  char Nome[150];

} TBI;

//TBI Tab[10]; 

int ProcuraNome(TBI *T, int Inicio, int Fim, char *NomePesquisar)
{
   int i;
   // Um ciclo desde Inicio at� Fim 
   for (i=Inicio ; i<= Fim; i++) { 
      // se encontrou a ficha, ent�o
	  // strcmpi-> nao considera maiusculo e minusculo
      if ( strcmpi(NomePesquisar, T[i].Nome) == 0) 
         return i; // devolve ind�ce!
    }
   // n�o encontrou nenhum registro com o mesmo nome, devolve -1! 
   return -1; 
} // fim da fun��o

int ProcuraBI(TBI *vetor, int Inicio, int Fim, int NumBI)
{
   int i;
   // Um ciclo desde Inicio at� Fim
   for (i=Inicio ; i<= Fim; i++) { 
       if ( NumBI == vetor[i].NumBI ) // se encontrou o registro, ent�o
          return i; // devolve �ndice
    }
    // n�o encontrou nenhuma ficha com o n�mero NumBI, devolve -1
    return -1; 
} // fim da fun��o

int main()
{
   TBI vet[5];
   int i, num_pesq, achou;
   char nome_pesq[150], resp;
   
   for (i=0;i<5;i++)
   {
      printf("Informe um numero: ");
	  scanf("%i",&vet[i].NumBI);
	  printf("Informe um nome: ");
	  scanf("%s",&vet[i].Nome);	  
   }
   
   do
   {
      printf("\nInforme um numero a pesquisar: ");
	  scanf("%i",&num_pesq);
	  achou=ProcuraBI(vet, 0, 4, num_pesq);
	  if (achou!=-1)
	    printf("\nNumero %i e Nome: %s",vet[achou].NumBI, vet[achou].Nome);
	  
	  printf("\nInforme um nome a pesquisar: ");
	  scanf("%s",&nome_pesq);
      achou=ProcuraNome(vet, 0, 4, nome_pesq);
	  if (achou!=-1)
	    printf("\nNumero %i e Nome: %s",vet[achou].NumBI, vet[achou].Nome);
	  	  
	  printf("\nContinua a pesquisa? ");
	  scanf("%s",&nome_pesq);
	  
   } while (toupper(resp) == 'S');
}
