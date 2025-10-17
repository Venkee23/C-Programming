#include<stdio.h>
int main()
{
	int num[5],i,sum,average;
	printf("enter the num\n");
	for(i=0;i<5;i++)
	scanf("%d",&num[i]);
	for(i=0;i<5;i++)
	{
		sum=sum+num[i];
	}
	average=sum/5;
	printf("%d\n",sum);
	printf("%d",average);
	return 0;
}
