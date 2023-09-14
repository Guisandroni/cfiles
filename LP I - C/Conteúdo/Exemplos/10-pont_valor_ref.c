int sqr(int x)
{
   x=x*x;
   return x;
}

int main()
{
  int t=10;
  printf("%d %d",sqr(t), t);
}

#include <stdio.h>
void troca(int *x, int *y)
{
  int aux;
  aux=*x;
  *x=*y;
  *y=aux;
}

int main()
{
   int i=10,j=20;
   printf("i=%d j=%d",i,j);
   troca(&i,&j);
   printf("\nDepois da troca: \n\ni=%d j=%d",i,j);
   return 0;
}

