#include <stdio.h>

int main()
{
   		 
   int i=3, j=5;
   int *p, *q;
   
   p=&i;
   q=&j;
   
   printf("\ni: %d  --->%p ",i,&i);
   printf("\nj: %d  --->%p ",j,&j);
   
   printf("\np: %p  --->%p ",p,&p);
   printf("\nq: %p  --->%p ",q,&q);
   i=10; 
   printf("\ni: %d",i);
   printf("\n*p: %d",*p);
   *p=15;
   printf("\ni: %d",i);
   printf("\ni: %d",*p);  
   
   
}