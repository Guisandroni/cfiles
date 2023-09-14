int main()
{
  char *p = "Alo mundo";
  char m[]={'O','I','E','E','E','1'};
  printf("\n\tEndereco de P: %p ",p);
  printf("\n\t%s",p);
  printf("\n\n\tEndereco de M : %p ",m);
  p++;
  //m++; ? atribuicao para constante não permitida
  printf("\n\n\tEndereco de P++: %p ",p);
  printf("\n\t%s",p);
  printf("\n\n\t%s",m);
}