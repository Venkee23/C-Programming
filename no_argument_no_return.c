#include<stdio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	int r;
	printf("\n enter r value");
	scanf("%d",&r);
	printf("the area is %f",3.14*r*r);
}
