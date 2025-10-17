#include<stdio.h>
int max_4(int a,int b,int c,int d);
int main()
{
	int a,b,c,d;
	printf("enter 4 no's");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int ans=max_4(a,b,c,d);
	printf("%d",ans);
	return 0;
}
int max_4(int a,int b,int c,int d)
{
	int max=a;
	if(b>max)
	max=b;
	{
		if(c>max)
		max=c;
	}
	{
		if(d>max)
		max=d;
	}
	return max;
}

