
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
