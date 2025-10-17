#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	int even_cnt=0;
	while(num>0){
		int last_digit=num%10;
		if(last_digit % 2 ==0){
			even_cnt++;
		}
		num=num/10;
		if(num ==0)
		break; 
	}
	printf("%d",even_cnt);
}
