#include<stdio.h>
int main()
{
	//area of the circle
	int pi=3.14;
	int r;
	printf("Enter the radius");
	scanf("%d", &r);
	printf("The area of circle is %d", pi*r*r);
	if (pi*r*r>1)
	printf("units");
	else
	printf("unit");
	printf("The circumference of circle is %d unit", 2*pi*r);
}