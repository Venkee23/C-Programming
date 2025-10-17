#include<stdio.h>
void main()
{
	int a,b;
	float c,result;
	double d;
	scanf("%d%d",&a,&b);
	scanf("%f",&c);
	scanf("%lf",&d);
	result=(a/b*c)-b+(a*d/3.0);
	printf("%.3f",result);
}
