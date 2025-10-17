#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,r1,c1,r2,c2,k;
	printf("Enter order of matrix 1:");
	scanf("%d%d",&r1,&c1);
	printf("Enter order of matrix 2:");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("Enter elements of first matrix-1:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter elements of second matrix-2:");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("After multiplication of result is : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d \t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix multiplication is not possible");
	}
}
