#include <stdio.h>
#include <stdlib.h>

void printDateAmerican(int day, int month, int year)
{
	printf("American Format Date:\n");
	printf("%d/%d/%d\n", month, day, year);
}

void printDateEuropean(int day, int month, int year)
{
	printf("European Format Date:\n");
	printf("%d.%d.%d\n", day, month, year);
}

int main(void)
{
	int day = 23, month = 3, year = 2024;

	printDateAmerican(day, month, year);
	printDateEuropean(day, month, year);

	return 0;
}
