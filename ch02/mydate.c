#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int day, month, year;

	day = 23;
	month = 3;
	year = 2024;
	
	printf("Hello, World!\n");

	printf("%d\n", day);
	printf("%d\n", month);
	printf("%d\n", year);

	printf("American format:\n");
	printf("%d/%d/%d\n", month, day, year);
	printf("European format:\n");
	printf("%d.%d.%d\n", day, month, year);

	return 0;
}
