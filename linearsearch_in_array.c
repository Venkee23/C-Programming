#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,search;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			printf("element found at index no:%d",i);
			break;
		}
    }
    if(i==n)
        {
		printf("element not found");
	    }
	return 0;
}
