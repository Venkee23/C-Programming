#include<stdio.h>
#include<math.h>
int main()
{
	int num=2345;
	int cnt=0;
	scanf("%d",&num);
	for(;num;){
	cnt++;
	num =num/10;
	}
		printf("%d\n",cnt);
	
}
