#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="siniha",s2[10]="badana";
	printf("%d\n",strlen(s1));
	printf("%s\n",strcpy(s2,s1));
	printf("%d\n",strcmp(s1,s2));
	printf("%s\n",strrev(s1));
	strcat(s1,s2);
	printf("%s\n",s1);
}
