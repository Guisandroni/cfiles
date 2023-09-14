#include <stdio.h>

typedef struct meuTempo
   {
      int horas;
	  int minutos;
	  int segundos;
   } meuTempo;  
   
   void mostra(meuTempo *t)
   {
     printf("\n%d h ",t->horas);
	 printf("%d min ",t->minutos);
	 printf("%d s \n",t->segundos);
	 //printf("\n%p",t);
   }   
   void espera()
   {
      long int t;
	  for (t=0;t<100000;t++) { }
   }
void atualiza(meuTempo *t)
   {
      
	  t->segundos++;
	  if (t->segundos==60)
	  {
	     t->segundos=0;
	     t->minutos++;
	  }
	  if (t->minutos==60)
	  {
	     t->minutos=0;
		 t->horas++;
	  }
	  if (t->horas==24) 
	     t->horas=0;
	  espera();	 
	  
   }

   int main()
   {
     meuTempo tempo;
	 int i;
	 tempo.horas=0;
	 tempo.minutos=0;
	 tempo.segundos=0;
	 
	 for (i=0;i<=100;i++)
	 {
	    atualiza(&tempo);
		mostra(&tempo);
	 }
	 return 0;
   }
 