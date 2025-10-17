//to find the length og the given string
#include<stdio.h>
void main()
{
	char s[]="programming is not fun";
	int i;
	for(i=0;s[i]!='\0';++i);
	printf("length of the string:%d",i);
}
