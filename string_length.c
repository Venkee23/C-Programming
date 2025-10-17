#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	int i,length=0;
	gets(s1);
	for(i=0;s1[i]!=0;i++)
	{
		length++;
	}
	printf("%d",length);
}
