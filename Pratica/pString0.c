#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	int c;

	c = 32;
	while (c < 127)
	{	printf("%3d: %c\n", c, c);
		c = c + 1;
	}
	
	return 0;
}
