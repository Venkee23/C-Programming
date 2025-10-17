#include<stdio.h>
int main()
{
	int m,n;
	for(m=1;m<=3;m++)
	{
		for(n=1;n<=2;n++)
	{
	if(m==n)
	continue;
	printf("m=%d n=%d\n",m,n);
    }
    }
}
