#include<stdio.h>
void main()
{
	int r,s,l,b,B,h,circle,square,rectangle,triangle;
	printf("enter r,s,l,b,B,h vales");
	scanf("%d%d%d%d%d%d",&r,&s,&l,&b,&B,&h);
	circle=3.14*r*r;
	printf("area of circle=%d\n",circle);
	square=s*s;
	printf("area of square=%d\n",square);
	rectangle=l*b;
	printf("area of rectangle=%d\n",rectangle);
	triangle=0.5*B*h;
	printf("area of triangle=%d\n",triangle);
}
