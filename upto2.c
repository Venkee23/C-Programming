//to get the following output
#include<stdio.h>
int main()
{
	float a,b,c,avg;
	printf("enter a,b and c values");
	scanf("%f%f%f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("(%f+%f+%f)/3=%0.2f",a,b,c,avg);
	return 0;
}
