#include<stdio.h>
int main()
{
	char op;
	int n1,n2;
	printf("enter the operator(+,-,*,/,%):");
	scanf("%c",&op);
	scanf("%d%d",&n1,&n2);
	switch(op)
	{
		case '+':
			printf("%d+%d=%d",n1,n2,n1+n2);
			break;
		case '-':
			printf("%d-%d=%d",n1,n2,n1-n2);
			break;
		case '*':
			printf("%d*%d=%d",n1,n2,n1*n2);
			break;
		case '/':
			printf("%d/%d=%d",n1,n2,n1/n2);
			break;
		case '%':
			printf("%d%%d=%d",n1,n2,n1%n2);
			break;
		default:
			printf("invalid choice");
	}
	return 0;
}
