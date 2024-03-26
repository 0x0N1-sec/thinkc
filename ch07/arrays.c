#include <stdio.h>
#include <stdlib.h>

void randomizeArray(int array[], int length, int upperBound);
void printArray(int array[], int length);

int main(void)
{
	int rArray[20];
	int upperBound = 10;
	int length = sizeof(rArray) / sizeof(rArray[0]);

	randomizeArray(rArray, length, upperBound);
	printArray(rArray, length);

	return 0;
}

void randomizeArray(int array[], int length, int upperBound)
{
	for(int i = 0; i < length; i++)
	{
		array[i] = rand() % upperBound;
	}
}

void printArray(int array[], int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%i ", array[i]);
	}
}
