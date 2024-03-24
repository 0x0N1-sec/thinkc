#include <stdio.h>
#include <stdlib.h>

void zippo(int quince, int flag);
void baffle(int output);

int main(void)
{
	zippo(5, 13);
	return 0;
}

void baffle(int output)
{
	printf("%i\n", output);
	zippo(12, -5);
}

void zippo(int quince, int flag)
{
	if(flag < 0)
	{
		printf("%i zoop\n", quince);
	}
	else
	{
		printf("rattle ");
		baffle(quince);
		printf("boo-wa-ha-ha\n");
	}
}

