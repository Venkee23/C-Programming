#include<stdio.h>
int main()
{
	int n,i,flag;
	scanf("%d",&n);
	flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	 printf("%d is prime no",n);
	else
	 printf("%d is not prime no",n);
	 return 0;
}
