int main (void) {
  int n = 0, x1 , x2 , r , c;
  while ( n >=0)
  { printf("informe o valor: \n");
  scanf ("%d", &n);
  if ( n >=0)
  { if (n == 0) r = 0;
   else 
    if (n == 1) r = 1;
    else {
       c = 2 ; x1=1 ; x2=0;
       while (c <= n)
       {
        r = x1 + x2 ; x2=x1; x1=r; c++;
       }
       printf ("\n0 valor eh %d\n", r);
       }
       }
       }
       
    return 0 ;
}