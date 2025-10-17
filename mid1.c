#include<stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=(a>b?(a>c?a:c):(b>c?b:c));
	printf("the bigger no is %d",d);
}
