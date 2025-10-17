#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("enter the value of 3 no's");
	scanf("%d%d%d",&no1,&no2,&no3);
	if((no1>no2)&&(no1>no3))
	printf("the no1 is biggest");
	else
	if((no2>no3)&&(no2>no1))
	printf("the no2 is biggest");
	else
	printf("no3 is biggest");
}
    
