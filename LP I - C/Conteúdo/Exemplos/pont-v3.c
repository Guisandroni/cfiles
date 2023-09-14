#include <stdio.h>

int main()
{
  char string[10];
  char *p;  
  
  printf("\nInforme um texto:");
  gets(string);  
  p=string;
  
  while (*p != '\0')
  {
    printf("%c ",*p);
	p++;
  }
}  
  
  
  
  
  
}