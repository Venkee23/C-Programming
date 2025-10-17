//to find average of 5 subject marks
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float average;
	printf("enter s1,s2,s3,s4,s5 values");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	average=(s1+s2+s3+s4+s5)/5.0;
	printf("average=%f",average);
}
