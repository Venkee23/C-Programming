#include<stdio.h>
float area(int);
int main()
{
	int r;
	float result;
	scanf("%d",&r);
	result=area(r);
	printf("%f",result);
	return 0;
}
float area(int r)
{
	return 3.14*r*r;
}
