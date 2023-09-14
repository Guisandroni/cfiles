
#include<stdio.h>
#include<string.h>

typedef struct Aluno
{
   char nome[21];
   float nota;
   int falta;
}stAluno;

void fOrdemNota(stAluno *pVetAlunos, int Fim)
{
   stAluno Aux;
   int x, y;
   printf("\n%i\n",Fim);
	for (x=Fim-1;x>0;x--){
		for (y=0;y<x;y++){
			   if (pVetAlunos[y].nota>pVetAlunos[(y+1)].nota)
			   {
			      Aux=pVetAlunos[y];
			      pVetAlunos[y]=pVetAlunos[(y+1)];
			     pVetAlunos[(y+1)]=Aux;
			   }
		}
	}
	printf("\n***Alunos ordenados pelas Notas (decrescente)***\n");
	for (x=0;x<Fim;x++){
	printf("\nAluno: %s\nNota: %.2f\nFaltas: %d\n",
	   pVetAlunos[x].nome,pVetAlunos[x].nota,pVetAlunos[x].falta);
	}
}


void fOrdemNome(stAluno *pVetAlunos, int Fim)
{
   stAluno Aux;
   int x, y;
   printf("\n%i\n",Fim);
	for (x=Fim-1;x>0;x--){
		for (y=0;y<x;y++){
		    printf("\n-->%s e %s",pVetAlunos[y].nome, pVetAlunos[y+1].nome);
			if (strcmp(pVetAlunos[y].nome, pVetAlunos[y+1].nome)>0)
			{
			   Aux=pVetAlunos[y];
			   pVetAlunos[y]=pVetAlunos[y+1];
			   pVetAlunos[y+1]=Aux;
			}
		}
	}
	printf("\n***Alunos ordenados por nome (crescente)***\n");
	for (x=0;x<Fim;x++){
	   printf("\nAluno: %20s  Nota: %2.2f   Faltas: %2d",
	        pVetAlunos[x].nome,pVetAlunos[x].nota,pVetAlunos[x].falta);
	}
	printf("\n\n");
}

void Cadastra(stAluno *pVetAlunos)
{
    int x;
	for(x=0;x<5;x++){
	   printf("\nInsira o nome do Aluno: ");
	   scanf("%20s",pVetAlunos[x].nome);
	   printf("\nInsira a nota do(a) %s: ",pVetAlunos[x].nome);
	   scanf("%f",&pVetAlunos[x].nota);
	   printf("\nInsira as faltas do(a) %s: ",pVetAlunos[x].nome);
	   scanf("%d",&pVetAlunos[x].falta);	
	}
}

int main()
{
   stAluno VetAlunos[5];
   int Opcao;   
   
	do{
		printf("\n****Digite sua Opcao****\n(1)Entrada de Dados\n(2)Ordenar Notas(Decrescente)\n(3)Ordenar por Nome(Crescente)\n(4)Pesquisar Aluno por Nome\n(5)Fim\n");
        scanf("%i",&Opcao);
		if(Opcao==1){
		Cadastra(VetAlunos);
		}
		else{
			if(Opcao==2){
			fOrdemNota(VetAlunos,5);
			}
			else{
				if(Opcao==3){
				fOrdemNome(VetAlunos,5);
				}
				else{
					if(Opcao==4){
					  printf("Depois");
					}
					else{
						if(Opcao==5){
						  break;
						}
						else{
						printf("\nOpcao Invalida! Escolha Novamente\n");
						}
					}
				}
			}
		}	  
	}while (Opcao!=5);
    return 0;
}