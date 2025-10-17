#include<stdio.h>
int main()
{
	int a[5];
	int i;
	//scanf("%d",&n);
	//printf("enter array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	//printf("reversed array:");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
