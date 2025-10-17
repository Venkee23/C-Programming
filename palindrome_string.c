#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	scanf("%s",s1[10]);
	strcpy(s2,s1);
	s1=strrev(s1);
	if(strcmp(s1,s2)==0)
	printf("palindrome");
	else
	printf("not a palindrome");
}
