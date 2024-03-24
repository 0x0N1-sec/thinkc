#include <stdio.h>
#include <stdlib.h>

void ping()
{
	printf("\n");
}

void baffle()
{
	printf("wug");
	ping();
}

void zoop()
{
	baffle();
	printf("you wugga ");
	baffle();
}

int main(void)
{
	printf("No, I ");
	zoop();
	printf("I ");
	baffle();
	
	return 0;
}
