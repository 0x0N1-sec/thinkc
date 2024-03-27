#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *firstName;
	char *lastName;

	printf("Please enter your first name: ");
	scanf("%ms", &firstName);
	printf("Please enter your last name: ");
	scanf("%ms", &lastName);

	printf("Hey there, %s %s!\n", firstName, lastName);

	free(firstName);
	free(lastName);

	return 0;
}
