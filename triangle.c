#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,s,area;
	printf("enter a,b,c,s values");
	scanf("%d%d%d%d",&a,&b,&c,&s);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%d",area);
}
