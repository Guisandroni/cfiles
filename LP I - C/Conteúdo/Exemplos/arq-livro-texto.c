#include <stdio.h>
#include <string.h>

#define MAX 80

FILE *arq;

void criaLivro()
{
  int codigo;  
  float preco;
  char nome[15];
  arq = fopen("livros.txt","a");
  do
  {
    printf("\n");
    printf("Digite os dados do livro:\n");
    printf("  Codigo ... ");	
	scanf("%i",&codigo);
	if (codigo > 0)
	{		
		printf("  Nome ..... ");    
		fpurge(stdin);
        gets(nome);
		printf("  Preco ... ");
		scanf("%f",&preco);
		fprintf(arq,"%i;%s;%.2f\n",
		     codigo,nome,preco);
	}
  } while (codigo > 0);
  fclose(arq);
}

void mostraLivro()
{
  int codigo;    
  char *nome, *preco;
  char slivro[MAX];
 
  arq = fopen("livros.txt","r");
  if (arq == NULL)
  {
    printf("Erro ao abrir arquivo\n");
    return; 
  }
  printf("\n");
  printf("NUM |         NOME         |  Preco  \n");
  printf("----+----------------------+---------\n");
  
  // lê a primeira linha do arquivo
  // buf recebe a string, max é o tamanho máximo de 
  //leitura e arq é o ponteiro para FILE)  
  fgets(slivro,MAX,arq);
  while (!feof(arq))
  {      
	// strtok: permite "quebrar" a string em várias (substring).
	codigo = atoi(strtok(slivro,";"));		
    nome = (char *) strtok(NULL,";");    
	preco=(char *)strtok(NULL,";");
	// -15s: alinha à esquerda considerando 15 posições	
    printf("%8d | %-15s | %s \n", codigo,nome,preco);
    fgets(slivro,MAX,arq);
  }
  
  printf("----+----------------------+------+------\n");  
 
  fclose(arq);
}
 

void procurarLivro(char *nome)
{
   
 
   arq=fopen("livros.txt", "r");   
   if (arq==NULL)
   {
     printf("Erro ao abrir o arquivo\n");
	 return;
   }      
	
   	
   
   fclose(arq);
}

int main()
{  
  criaLivro();
  mostraLivro();
}

