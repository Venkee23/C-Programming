#include<stdio.h>
int main()
{
	int a[5]={3,6,1,9,5},i,large;
	large=a[0];
	for(i=1;i<5;i++)
	{
		if(large<a[i])
		large=a[i];
	}
	printf("the largest element of array is %d",large);
	return 0;
}
