#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 82

FILE *arq;

struct data
{ 
   int dia; int mes; int ano;

};

void novaconsulta()
{   
	struct data dtconsulta;
	char medico[30];
	char paciente[30];
	// a: abre um arquivo em modo texto para gravação, a partir de seu final.
  // Se o arquivo não existir ele será criado
	arq = fopen("consulta.txt","a");
	
	while(1)
	{	printf( "Data:\n" ); 
	    scanf( "%d/%d/%d", &dtconsulta.dia,&dtconsulta.mes, &dtconsulta.ano );
		printf("\n-----%d",dtconsulta.dia);
		if( dtconsulta.dia == 0 ) break ;
		
		printf( "Nome paciente:\n" ); scanf( "%s", paciente );
		printf( "Nome medico:\n" ); scanf( "%s", medico );
		
		fprintf(arq,"%d/%d/%4d%;%s;%s\n",dtconsulta.dia,
		                                 dtconsulta.mes,
										 dtconsulta.ano,
										 paciente,
										 medico);
	}
	fclose(arq);
	
}

void listarConsulta()
{
 
  char linha[82];
  char *paciente;
  char *medico;
  struct data dtconsulta;
    
  // abre o arquivo
  arq = fopen("consulta.txt","r");
  
  if (arq == NULL) 
  {
    printf("Erro ao abrir arquivo\n");
    return; 
  }

  printf("\n");
  printf("Consulta|  Paciente    |  Medico  \n");
  printf("----+----------------------+-----------+-----------\n");
  
  // lê a primeira linha do arquivo
  // linha recebe a string, max é o tamanho máximo de 
  //leitura e arq é o ponteiro para FILE)  
  fgets(linha,MAX,arq);
  while (!feof(arq))
  {      	
	// strtok: permite "quebrar" a string em várias (substring).
	dtconsulta.dia = atoi(strtok(linha,"/"));	
	dtconsulta.mes = atoi(strtok(NULL,"/"));	
	dtconsulta.ano = atoi(strtok(NULL,";"));	
	paciente = strtok(NULL,";");	
	medico = strtok(NULL,";");
	
    // -30s: alinha à esquerda considerando 30 posições	
    printf("\n%2d/%2d/%4d | %-30s | %-30s ",
	        dtconsulta.dia, dtconsulta.mes, dtconsulta.ano,
			paciente, medico);
    fgets(linha,MAX,arq);
  }
  printf("\n----+----------------------+------+----------------\n");  
 
  fclose(arq);
}

int main()
{
   novaconsulta();
   listarConsulta();
  return 0;	
}