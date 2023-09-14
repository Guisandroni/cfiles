#include <stdio.h>

void selecao (int tam, float *vetor)
{
     int minimo, aux, i, j;
	 
     for (i=0; i<=tam-1;i++)
	 {
         minimo = i;
         // pega indice do menor
         for (j=i+1;j<=tam-1;j++)
		 {
             if ( vetor[j] < vetor[minimo] )
			 {
                 minimo = j;
             }
         }
		 //printf("\nIndice do menor: %i",minimo);
         // efetua a troca
		 printf("\ntroca: %.1f  e %.1f",vetor[minimo],vetor[i]);
		 aux = vetor[minimo];
         vetor[minimo] = vetor[i];
         vetor[i] = aux;
     }
 }
 
 /* Testa algoritmo de ordenação por seleção */
int main ()
{
  int i;
  float v[6] = {12.5,12.4,13,19,11,0.5};
  printf("\nVetor desordenado: ");
  for (i=0; i<6; i++)
    printf("%.1f ",v[i]);
  selecao(6,v);
  printf("\nVetor ordenado: ");
  for (i=0; i<6 ;i++)
    printf("%.1f ",v[i]);
  printf("\n");
return 0;
}

