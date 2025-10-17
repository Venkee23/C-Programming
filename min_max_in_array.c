#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],min,max,i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("maximum value is =%d\n",max);
	printf("minimum value is =%d\n",min);
	return 0;
}
