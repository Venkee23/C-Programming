#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Geeksfor",str2[]="Geeks",str3[]="Website";
	strcat(str1,str2);
	printf("strcat(str1,str2)=%s\n",str1);
	printf("strlen(str3)=%d\n",strlen(str3));
	printf("strrev(str2)=%s",strrev(str2));
	//return 0;
}
