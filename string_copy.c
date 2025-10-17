#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	int i=0;
	gets(s1);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	printf("%s",s2);
}
