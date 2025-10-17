#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		printf("value is 1\n");
		break;
		case 2:
		printf("value is 2\n");
		break;
		case 3:
		printf("value is 3\n");
		break;
		default:printf("value is not 1,2,3\n");
		break;
	}
	return 0;
}
