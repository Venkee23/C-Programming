#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("input.txt","w");
	if(fp==NULL)
	{
		printf("file not created");
		exit(0);
	}
	fprintf(fp,"siniha45@");
	fclose(fp);
	return 0;
}
