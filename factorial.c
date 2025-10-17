#include<stdio.h>
void main()
{
	int n,fact=1,i=1;
	printf("enter the value of n \n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("the factorial of n %d is %d",n,fact);
}
