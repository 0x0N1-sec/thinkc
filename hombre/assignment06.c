#include <stdio.h>

int main(void)
{
	int numerator;
	int denominator;

	printf("Numerator: ");
	scanf("%d", &numerator);
	printf("Denominator: ");
	scanf("%d", &denominator);

	if(denominator % numerator != 0)
	{
		printf("There is a remainder\n");
	}
	else
	{
		printf("There is no remainder\n");
	}
	return 0;
}
