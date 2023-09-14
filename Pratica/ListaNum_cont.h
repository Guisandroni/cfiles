#define MAXIMO	50

typedef int TItem;

typedef struct
{	int final, qtde, soma;
	TItem lista[MAXIMO];	
} TLista;

void ImprimeLista(TLista *, char *);
void InicializaLista(TLista *);
int IncluiItem(TLista *, int);
int ExcluiItem(TLista *, int);
