#include<stdio.h>
int main()
{
	char str[1001];
	printf("enter a string:");
	scanf("%s",str);
	int freq[10]={0};
	int i;
    for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		freq[str[i]-'0']++;
	}
	printf("digit frequency:\n");
	printf("0 1 2 3 4 5 6 7 8 9\n-------------\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",freq[i]);
	}
	return 0;
}
