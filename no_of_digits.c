#include<stdio.h>
int main()
{
	int n,digit=0,rem;
	printf("enter the n value");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		digit++;
		n=n/10;
	}
	printf("the no of digits is %d",digit);
}
