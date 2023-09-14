#include <stdio.h>

int main()
{
    int x,y;
    x=30;
	y=x++;
	printf("\npós incremento: x=%d y=%d",x,y);
	
    x=30;
    y=++x;
	printf("\npré incremento: x=%d y=%d",x,y);
}