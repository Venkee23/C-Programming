#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	strcmp(s1,s2);
	if(strcmp(s1,s2)==0)
	{
		printf("a palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
