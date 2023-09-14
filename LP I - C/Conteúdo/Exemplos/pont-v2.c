#include <stdio.h>

int main()
{
  int num[7],i;
  
  for (i=0;i<7;i++)
  {
     printf("Informe um numero: ");
     scanf("%i",(num+i)); = &num[i]
  }
  printf("\n");
  for (i=0;i<7;i++)
  {
     printf("%d --> %p",*(num+i),num+i);
	         
  }
  
}