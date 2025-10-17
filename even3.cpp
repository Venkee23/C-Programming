#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int even_cnt=0 ,odd_cnt=0;
	while(n>0){
	
	int r=n %10;
		if(r % 2 ==0){
		even_cnt++;
		}else{
			odd_cnt++;
		}
		n=n/10;
	}
		
			if(even_cnt==0)
		{
		 printf("strictly 0dd"); }
	else if(odd_cnt==0)
	{
		printf("strictly even");
	}else
	{
		printf("mixed num");
	}
}

