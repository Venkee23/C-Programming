#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		for(j=4;j<=n;j++)
		if(i==4 || i==n || j==4 || j==n)
		{
			printf("%d",i);
		}else{
			printf("%d",j);
		}
		{
			printf("\n");
		}	
	}
}
