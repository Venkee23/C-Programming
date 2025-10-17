#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,cube=0,original_no;
	printf("enter the value of n \n");
	scanf("%d",&n);
	original_no=n;
	while(n>0)
	{
		rem=n%10;
		cube=cube+pow(rem,3);
		n=n/10;
	}
	if (original_no==cube)
	printf("the given no %d is an armstrong no",original_no);
	else
	printf("the given no %d is not an armstrong no",original_no);
	return 0;
}
