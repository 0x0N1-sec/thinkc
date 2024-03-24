#include <stdio.h>
#include <stdlib.h>

void beer(int num);

int main(void)
{
	beer(99);
}

void beer(int num)
{
	if(num == 0)
	{
		printf("No more bottles of beer!\n");
		return;
	}

	printf("%d bottles of beer on the wall\n", num);
	printf("Take one down, pass it around\n");
	beer(num-1);
}
