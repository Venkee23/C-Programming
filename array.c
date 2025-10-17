#include<stdio.h>
int main()
{
	int rollno[5],i;
	printf("enter the roll no\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&rollno[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",rollno[i]);
	}
	return 0;
}
