#include<stdio.h>
int main()
{
	int no1,no2,sum;
	printf("enter no1,no2 values");
	scanf("%d%d",&no1,&no2);
	sum=no1+no2;
	if(sum>20)
	{
		printf("sum = %d",sum);
	}
	else
	{
		printf("go to step 5");
	}
}
