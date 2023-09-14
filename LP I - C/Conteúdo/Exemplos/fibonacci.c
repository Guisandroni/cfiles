#include <stdio.h>

int main()
{
   int n,i;
   printf("Digite a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &n);
   printf("\nA sequência de Fibonacci e: \n");
   for(i=1; i<=n; i++)
       printf("%d ", fibonacci(i));
   
       printf("\nReferente a: %d ", fibonacci(n));
} 



int fibonacci(int num)
{
   
   if(num==1 || num==2)
   {       
	   return 1;
   }
   else
   if (num==0)
       return 0;
   else   
       return fibonacci(num-1) + fibonacci(num-2); 
   
}