/*
	Versão estendida do programa que implementa por encadeamento 
	a lista linear de inteiros.
	
	Trata possibilidade de lista cheia.
	Usa um nome padrao para encapsular o tipo de dado do item da lista.
	Permite a excluir da lista valores informados pelo usuário.
	Utiliza subrotina para a impressão da lista.
*/
#include <stdio.h>
#include <stdlib.h>

struct regLista
{	int valor;
	struct regLista *prox;
};
typedef struct regLista TItem;

void ImprimeLista(TItem *, char *);

int main(void)
{	int numero;
	TItem *inicio, *aux, *ant;

	/* inicializando a variável inicio com um endereco vazio */
	inicio = NULL;
	while (1)
	{	printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;

		/* criando uma variável struct regLista dinamicamente */
		aux = (TItem *) malloc(sizeof(TItem));
		
		if (aux == NULL)
		{	puts("Memoria insuficiente para esta operacao ...");
			return 2;
		}

		/* preenchendo os campos da variável criada dinamicamente */
		aux->valor = numero;
		aux->prox = NULL;

		/* conectando o novo nó na lista encadeada */
		if (inicio == NULL)
			inicio = aux;
		else
			ant->prox = aux;

		ant = aux;
	}

	ImprimeLista(inicio, "Conteudo da lista");
	
	while (1)
	{	printf("\n\nInforme o numero a excluir da lista:\n");
		scanf("%d", &numero);
	
		if (numero < 0)
			break;
		
		/* pesquisando o numero na lista */
		ant = NULL;
		aux = inicio;
		while (aux != NULL && aux->valor != numero)
		{	ant = aux;
			aux = aux->prox;
		}
	
		if (aux == NULL)
			puts("Valor nao encontrado para exclusao");
		else
		{	/* cuidando do encadeamento */
			if (ant == NULL)
				inicio = aux->prox;
			else
				ant->prox = aux->prox;
		
			/* eliminando da memoria a variavel apontada por aux */
			free(aux);

			ImprimeLista(inicio, "Novo conteudo da lista");
		}
	}
	
	return 0;
}

void ImprimeLista(TItem *lst, char *cabec)
{	TItem *aux;
	int soma, qtde;

	if (lst == NULL)
		puts("Lista vazia");
	else
	{	printf("\n\n\n%s\n", cabec);
	
		soma = 0;
		qtde = 0;
		aux = lst;
		while (aux != NULL)
		{	printf("%d\n", aux->valor);
			soma = soma + aux->valor;
			qtde = qtde + 1;
	
			aux = aux->prox;
		}
		
		printf("Soma = %d   Media = %.2f\n", soma, soma / (float)qtde);
	}
}

