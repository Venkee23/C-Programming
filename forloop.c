#include<stdio.h>
void main()
{
	int n,fact=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of n %d is %d",n,fact);
}
