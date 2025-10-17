#include<stdio.h>
int sum();
int main()
{
	int result;
	result=sum();
	printf("sum=%d",result);
	return 0;
}
int sum()
{
	int n,i,result=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	result+=i;
	return result;
}
