#include<stdio.h>
float area();
int main()
{
	float result;
	result=area();
	printf("%f",result);
	return 0;
}
float area()
{
	int r;
	scanf("%d",&r);
    return 3.14*r*r;
}
