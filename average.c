#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,average;
	printf("enter s1,s2,s3,s4 values");
	scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
	average=(s1+s2+s3+s4)/4;
	if(average>35)
	{
		printf("grade is pass");
	}
	else
	{
		printf("grade is fail");
	}
}
