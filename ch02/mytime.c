#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hour, minute, second;
	hour = 15;
	minute = 24;
	second = 20;

	printf("Seconds since midnight: %d\n", (hour*60*60) + (24*60) + 20);
	printf("Seconds remaining in day: %d\n", ((24-hour)*60*60)+((60-minute)*60) + (60-second));
}
