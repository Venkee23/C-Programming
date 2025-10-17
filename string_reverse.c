#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	int i;
	gets(s1);
	/*while(s1[i]!='\0')
	{
		length++;
		i++;
    }*/
	for(i=strlen(s1)-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
	return 0;
}
