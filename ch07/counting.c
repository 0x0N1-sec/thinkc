#include <stdio.h>
#include <stdlib.h>

void randomizeArray(int array[], int length, int upperBound);
void printArray(int array[], int length);
int howMany(int array[], int length, int value);

int main(void)
{
	int rArray[200000];
	int upperBound = 10;
	int length = sizeof(rArray) / sizeof(rArray[0]);

	randomizeArray(rArray, length, upperBound);

	printf("value\tHowMany\n");
	for(int i = 0; i < upperBound; i++)
	{
		//this is the important part
		//calling the howMany function in the loop causes
		//each value - i - to be iterated over and counted
		printf("%i\t%i\n", i, howMany(rArray, length, i));
	}
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
	printf("\n");
}

int howMany(int array[], int length, int value)
{
	int count =  0;

	for(int i = 0; i < length; i++)
	{
		if(array[i] == value)
		{
			count++;
		}
	}
	return count;
}



