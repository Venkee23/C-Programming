#include<stdio.h>
int main ()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=5;k>=j;k--){
				printf("%d",k);
		}
		{
			printf("\n");
		}
	}
}

