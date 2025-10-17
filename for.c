#include<stdio.h>
#include<math.h>
int main()
{
	int l,r,i;
	scanf("%d %d",&l,&r);
	int sum=0;
	for(i=l;i<=r;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
