#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a=15,b=20;
	printf("max=%d\n",((a+b)+abs(a-b))/2);
	printf("min=%d\n",((a+b)-abs(a-b))/2);
}
