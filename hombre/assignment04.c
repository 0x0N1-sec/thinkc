#include <stdio.h>

#define PI 3.14

int main(void)
{
	double radius;
	double area;

	printf("Enter the radius of your circle: ");
	scanf("%lf", &radius);
	
	area = PI * (radius * radius);

	printf("The area of your circle is %lf\n", area);

	return 0;
}

