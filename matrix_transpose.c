#include<stdio.h>
int main()
{
	int a[5][5],transpose[5][5],r,c,i,j;
	printf("Enter order of matrix");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix before transpose\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		   transpose[i][j]=a[j][i];
		}
	}
	printf("Transpose of given matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		   printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}
