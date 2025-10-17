#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	while(1){
		int last_digit=n % 10;
		sum+=last_digit*last_digit;
		n=n/10;
		if(n==0){
			n=sum;
			sum =0;
			if(n>=1 && n<=9){
				break;
			}
		}
	}
	if(n==1 || n==7){
		printf("happy number");
	}else{
		printf("not happy number");
	}
}
