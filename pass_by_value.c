#include<stdio.h>
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("after swapping: a=%d, b=%d",a,b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before swapping: a=%d, b=%d\n",a,b);
	swap(a,b);
}
