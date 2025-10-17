#include<stdio.h>
void main()
{
	int n,original_no,reversed=0,rem;
	scanf("%d",&n);
	original_no=n;
	while(n>0)
	{
		rem=n%10;
		reversed=reversed*10+rem;
		n=n/10;
	}
	printf("%d",reversed);
	//if(original_no==reversed)
	//printf("%d is palindrome",original_no);
	//else
	//printf("%d is not a palindrome",original_no);
}
