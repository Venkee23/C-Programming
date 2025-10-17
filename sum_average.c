#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum;
	float average;
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("sum=%d",sum);
	average=sum/5.0;
	printf("average=%f",average);
}
