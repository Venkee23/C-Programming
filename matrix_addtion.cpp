#include<stdio.h>
int main()
{
	int arr1[50][50],brr1[50][50],crr1[50][50];
	int i,j,n;
	printf("Input the size of the matrix :\n ");
	for(i=0;i<n;i++);
	{
		for(j=0;j<n;j++)
		{
			printf("element - [%d],[%d] :\n ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Input elements in the second matrix :\n");
	for(i=0;i<n;i++);
	{
		for(j=0;j<n;j++)
		{
			printf("element - [%d],[%d] :\n ",i,j);
			scanf("%d",&brr1[i][j]);
		}
	}
	//calculate the sum of array
	for(i=0;i<n;i++);
		for(j=0;j<n;j++)
		   crr1[i][j]=arr1[i][j]+brr1[i][j];
	printf("\nThe Addition of two matrix is :");
	for(i=0;i<n;i++);
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",crr1[i][j]);
	}
}
