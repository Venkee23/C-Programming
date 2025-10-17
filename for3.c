#include<stdio.h>
#include<math.h>
int main()
{
	int i,l,r;
	int cnt=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++){
		if(i%2==0 || i%3==0 || i%5==0)
		{
	    cnt=cnt+1;
	    }
}
   
	printf("%d\n",cnt);
	
}
