#include <stdio.h>

int main(void)
{	unsigned char cNum;
	int iNum;

	cNum = 0;
	iNum = 0;
	while (cNum <= 260)
	{	printf("%d %d\n", iNum, cNum);
		iNum = iNum + 1;
		cNum = cNum + 1;
	}

	return 0;
}
