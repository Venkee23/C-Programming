#include<stdio.h>
int super_digit(int,int);
int main()
{
	int n,k;
	printf("Enter n and k value:");
	scanf("%d%d",&n,&k);
	printf("the super digit is %d",super_digit(n,k));
	return 0;
}
int super_digit(int n,int k)
{   
    int s=0;
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	s=s*k;
	if(s%9==0)
	{
		return 9;
	}
	else
	{
		return s%9;
	}
}
