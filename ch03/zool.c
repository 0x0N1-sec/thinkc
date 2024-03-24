#include <stdio.h>
#include <stdlib.h>

void zool(int x, char y, char z)
{
	printf("%d\n", x);
	printf("%c\n", y);
	printf("%c\n", z);
}

int main(void)
{
	zool(11, 'b', 'R');
	return 0;
}
