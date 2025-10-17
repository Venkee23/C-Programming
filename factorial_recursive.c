#include<stdio.h>
int nfactor(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	//int res=n*nfactor(n-1);
	else
	return n*nfactor(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	//int factor=nfactor(n);
	printf("factorial:%d",nfactor(n));
	return 0;
}
