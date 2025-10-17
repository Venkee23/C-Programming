#include<stdio.h>
int main()
{
	int a[5]={2,4,6,8,10},i,sum=0;
	for(i=0;i<5;i++)
	{
	    sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
