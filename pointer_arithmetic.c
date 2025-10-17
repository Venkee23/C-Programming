#include<stdio.h>
int main()
{
	int n=50;
	int *p;
	p=&n;
	printf("address of p variable is %u \n",p);
	p=p+1;
	printf("after increment: address of p variable is %u \n",p);
	p=p-1;
	printf("after decrement: address of p variable is %u \n",p);
	p=p+3;
	printf("after addition: address of p variable is %u \n",p);
}
