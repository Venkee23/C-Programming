#include<stdio.h>
void main()
{
	char op;
	double no1,no2;
	printf("enter an operator:(+,-,*,/)");
	scanf("%c",&op);
	scanf("%lf%lf",&no1,&no2);
	switch(op)
	{
		case '+':
			printf("%.1lf+%.1lf=%.1lf",no1,no2,no1+no2);
			break;
		case '-':
			printf("%.1lf-%.1lf=%.1lf",no1,no2,no1-no2);
			break;
		case '*':
			printf("%.1lf*%.1lf=%.1lf",no1,no2,no1*no2);
			break;
		case '/':
			printf("%.1lf/%.1lf=%.1lf",no1,no2,no1/no2);
			break;
		default :
			printf("error! operator is not correct");
	}
}
