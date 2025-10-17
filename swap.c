#include<stdio.h>
void main()
{
	int no1,no2;
	printf("enter the value of no1,no2 \n");
	scanf("%d%d",&no1,&no2);
	printf("before swapping no1=%d,no2=%d \n",no1,no2);
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	printf("after swapping no1=%d,no2=%d\n",no1,no2);
}
