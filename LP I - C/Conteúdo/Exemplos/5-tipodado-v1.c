#include <stdio.h>

int main()
{
   char letra='A';
      
   for (letra=65;letra<78;letra++)
   {
      printf("\nLetra : %c  --> %i",letra, letra);
	  printf("       Letra : %c  --> %i",letra+13, letra+13);
   }
   return 0;
}