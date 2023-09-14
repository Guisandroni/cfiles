int acha(char *s, char c) 
-> Parâmetro formal: se comportam como variáveis locais
-->dentro da função e são criadas na entrada e destruídas na saída.
{
   while (*s)
     if (*s==c)
       return 1;
     else
       s++;
   return 0;
}