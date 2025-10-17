#include<stdio.h>
void area(int);
int main()
{
	int r;
	float result;
	scanf("%d",&r);
	area(r);
	return 0;
}
void area(int r)
{
	printf("\n the area is:%f",3.14*r*r);
}
