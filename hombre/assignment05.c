#include <stdio.h>

int main(void)
{
	int seconds;
	int hours;
	int minutes;

	printf("How many seconds to convert? ");
	scanf("%d", &seconds);

	minutes = seconds / 60;
	hours = minutes / 60;
	minutes = (seconds / 60) - (hours*60);
	seconds = minutes % 60;	

	printf("Total time is: %d hours %d minutes and %d seconds\n", hours, minutes, seconds);


	return 0;
}
