//da pra fazer com ponteiro
// e matriz bidimensional com string
#include <stdio.h>
int main()
{
   int result[7]={0,0,0,0,0,0,0};
   char pecas[7][18]={"ausencia de pecas",
                      "peao",
					  "cavalo",
					  "torre",
					  "bispo",
					  "rei",
					  "rainha"};
					  
   int lin,col;
   int tab[8][8]={{6,0,0,5,0,0,1,0},
                  {0,1,0,2,0,3,0,2},
				  {0,1,1,1,0,1,0,0},
                  {0,0,2,0,3,4,4,3},
				  {1,0,1,1,0,1,0,0},
                  {0,0,1,3,0,4,0,1},
                  {1,0,0,0,2,2,2,1},
                  {1,5,0,6,0,1,1,0}};
				  
				  
     for (lin=0;lin<8;lin++)
    {	
       for (col=0;col<8;col++)
       {
	     result[tab[lin][col]]++;
	     			
       } 	   
	}
	for (lin=0;lin<7;lin++)
	   printf("\n%s: %i",pecas[lin],result[lin]);
	
	
}