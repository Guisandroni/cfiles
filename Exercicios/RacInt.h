/*
	Arquivo de interface do TDA Racional.
*/

typedef struct {int num, den;} TRac;
/* Linha de cima é o mesmo que:
	struct racionais {int num;
					  int den;
					};
				
	typedef struct racionais TRac;
*/

/* Prototipos das funcoes */
TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
TRac SimplRac(TRac);
