#include<stdio.h>
int add(int a,int b)
{
	int sum,carry;
	if(b==0)
	return 0;
	sum=a^b;
	carry=(a&b)<<1;
	return add(sum,carry);
	
}
