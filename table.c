//to print multiplication table of given no n
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	printf("the multiplication table of %d\n",n);
	for(i=1;i<=10;i++)
	printf("%d*%d=%d\n",n,i,n*i);
}
