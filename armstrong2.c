#include<stdio.h>
#include<math.h>
int main()
{
	int n,original_no,result=0,rem;
	scanf("%d",&n);
	original_no=n;
	while(n>0)
	{
		rem=n%10;
		result=result+pow(rem,3);
		n=n/10;
	}
	if(original_no==result)
	printf("%d is armstong no",original_no);
	else
	printf("%d is not armstrong no",original_no);
}
