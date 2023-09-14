#include <stdio.h>
#include <string.h>

int main()
{
   int l, c, x;
   
   int trinum[3][2][3]={
                             {{1,2,3},{4,5,6}},
							 {{7,8,9},{10,11,12}},
							 {{13,14,15},{16,17,18}}
                           };
	for (l=0;l<3;l++)
       for (c=0;c<2;c++)
          for (x=0;x<3;x++)
          {
			printf("\ntrinum[%i][%i][%i]=%i",l,c,x,trinum[l][c][x]);
          }		  
						   
}