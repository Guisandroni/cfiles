#include <stdio.h>

int main()
{
   int x=5, *px, **ppx;
   px=&x;
   ppx=&px;
   //px=&ppx;
   printf("\nx = %d - &x = %p",x,&x);
   printf("\npx = %d - &x = %p",*px,px);
   printf("\nppx = %p - &x = %p",ppx,*ppx);
   
}