#include <stdio.h>

void countdown(int n)
{
	if (n == 0)
	{
		printf("Blastoff!\n");
	}
	else
	{
		printf("%i\n", n);
		countdown(n-1);
	}
}

int main(void)
{
	countdown(10);

	return 0;
}
