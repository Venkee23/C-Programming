#include<stdio.h>
void main()
{
	int n,fact=1,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
}
