/*
	Versão estendida do programa que implementa por ENCADEAMENTO 
	a lista linear de inteiros.
	
	Trata possibilidade de lista cheia.
	Usa um nome padrao para encapsular o tipo de dado do item da lista.
	Permite a excluir da lista valores informados pelo usuário.
	Utiliza subrotina para a impressão da lista.
	
	Utiliza descritor estruturado para administrar a lista linear e
	subrotinas para cada uma das operações previstas.
*/
#include <stdio.h>
#include <stdlib.h>

#define FALSE	0
#define TRUE	1

struct regLista
{	int valor;
	struct regLista *prox;
};
typedef struct regLista TItem;

struct descLista
{	TItem *inicio, *final;
	int soma, qtde;
};
typedef struct descLista TLista;

void ImprimeLista(TLista *, char *);
void InicializaLista(TLista *);
int IncluiItem(TLista *, int);
int ExcluiItem(TLista *, int);

int main(void)
{	int numero;
	TLista lista;

	InicializaLista(&lista);
		
	while (TRUE)
	{	printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;

		if (IncluiItem(&lista, numero) == FALSE)
		{	puts("Memoria insuficiente para esta operacao ...");
			return 2;
		}
	}

	ImprimeLista(&lista, "Conteudo da lista");
	
	while (TRUE)
	{	printf("\n\nInforme o numero a excluir da lista:\n");
		scanf("%d", &numero);
	
		if (numero < 0)
			break;
		
		if (ExcluiItem(&lista, numero) == FALSE)
			puts("Valor nao encontrado para exclusao");
		else
			ImprimeLista(&lista, "Novo conteudo da lista");
	}
	
	return 0;
}

void InicializaLista(TLista *lst)
{	/* inicializa o conjunto de descritores da lista */

	lst->inicio = NULL;
	lst->final = NULL;
	lst->soma = 0;
	lst->qtde = 0;
}

int IncluiItem(TLista *lst, int valor)
{	TItem *aux;
			
	/* criando uma variável struct regLista dinamicamente */
	aux = (TItem *) malloc(sizeof(TItem));
	
	if (aux == NULL)
		return FALSE;

	/* preenchendo os campos da variável criada dinamicamente */
	aux->valor = valor;
	aux->prox = NULL;

	/* conectando o novo nó na lista encadeada */
	if (lst->inicio == NULL)
		lst->inicio = aux;
	else
		lst->final->prox = aux;
	
	lst->final = aux;
	lst->qtde = lst->qtde + 1;
	lst->soma = lst->soma + aux->valor;
	
	return TRUE;
}

int ExcluiItem(TLista *lst, int valor)
{	TItem *aux, *ant;

	/* pesquisando o numero na lista */
	ant = NULL;
	aux = lst->inicio;
	while (aux != NULL && aux->valor != valor)
	{	ant = aux;
		aux = aux->prox;
	}
	
	if (aux == NULL)
		return FALSE;
	else
	{	/* cuidando do encadeamento */
		if (ant == NULL)
			lst->inicio = aux->prox;
		else
			ant->prox = aux->prox;
		
		/* atualizando os descritores */
		lst->soma = lst->soma - aux->valor;
		lst->qtde = lst->qtde - 1;
		if (aux->prox == NULL)
			lst->final = ant;
			
		/* eliminando da memoria a variavel apontada por aux */
		free(aux);

		return TRUE;
	}
}

void ImprimeLista(TLista *lst, char *cabec)
{	TItem *aux;

	if (lst->inicio == NULL)
		puts("Lista vazia");
	else
	{	printf("\n\n\n%s\n", cabec);

		aux = lst->inicio;
		while (aux != NULL)
		{	printf("%d\n", aux->valor);
	
			aux = aux->prox;
		}
		
		printf("Soma = %d   Media = %.2f\n", 
				lst->soma, lst->soma / (float)lst->qtde);
	}
}

