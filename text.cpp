#include<stdio.h>
int main ()
{
   int i,j,k;
   int n=9;
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n-1-i;j++)
	   {
	   	printf(" ");
	   }
	for(k=0;k<i+1;k++)
	   {
	   	printf(" * ");
	   }
	   printf("\n");   
	   
   }
}
