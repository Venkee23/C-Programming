#include<stdio.h>
int main()
{
	int n=9;
	int i,j,k,s;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=1;j++)
		{
			printf("*");
	    }
	    for(k=j;k<(2*i)-1;k++)
	    {
	    	printf(" ");
		}
		for(s=k;s<+i;s++)
		{
			printf(" ");
		}
		{
		 printf("\n");
		}
	}
}
