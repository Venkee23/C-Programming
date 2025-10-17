#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)||(b==c)||(a==c))
	{
		printf("the output is zero");
	}
	else
	{
		printf("the output is one");
	}
}
