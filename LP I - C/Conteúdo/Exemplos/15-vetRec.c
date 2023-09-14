#include <stdio.h>

int somaVetorRec(int *vet, int tam)
{
    if (tam == 1)
      return *vet;
	else
	{
	   tam--;
	   return *vet+somaVetorRec(vet+1,tam);
	}
}
  
int main()
{
 int v[10]={1,2,3,4,5,6,7,8,9,10};
 printf("A soma do vetor v eh %i",somaVetorRec(v,10));
 return 0;
}