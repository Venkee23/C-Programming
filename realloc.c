#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr;
	ptr=(int*)calloc(5,sizeof(int));
	printf("enter 5 elements:");
	for(i=0;i<5;++i)
	{
		scanf("%d",(ptr+i));
	}
	ptr=(int*)realloc(ptr,10*sizeof(int));
	printf("enter another 5 elements");
	for(i=5;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("numbers are \n");
	for(i=0;i<10;++i)
	{
		printf("%d ",*(ptr+i));
	}
	free(ptr);
	return 0;
}
