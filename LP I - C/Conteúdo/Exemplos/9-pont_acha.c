int acha(char *s, char c) 
-> Par�metro formal: se comportam como vari�veis locais
-->dentro da fun��o e s�o criadas na entrada e destru�das na sa�da.
{
   while (*s)
     if (*s==c)
       return 1;
     else
       s++;
   return 0;
}