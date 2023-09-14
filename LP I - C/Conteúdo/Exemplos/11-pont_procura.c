#include <stdio.h>
char *procura(char *s, char ch)
{
    while (*s != ch && *s != '\0')
       s++;
    if (*s != '\0')
      return s;
   else
     return (char *)0;
}
int main()
{
   char str[81], *ptr;
   printf("Digite uma frase: \n");
   gets(str);
   ptr=procura(str,'h');
   printf("\nA frase começa no endereco %p\n", str);
   if (ptr!=NULL)
   {
     printf("\nPrimeira ocorrencia do caractere 'h': %p\n", ptr);
     printf("\nA sua posicao eh: %d\n",ptr-str);
   }
   else
   {
     printf("O caracter 'h' nao existe nessa frase\n");
   }
   return 0;
}