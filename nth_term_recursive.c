#include<stdio.h>
int find_nth_term(int n,int a,int b, int c) 
{
    int i,sum; 
    for(i=1;i<n;i++) 
	{ 
	    sum=a+b+c; 
	    a = b;
        b = c;
	    c = sum; 
	} 
	return a;
}
int main()
{
    int n,a, b,c;
    printf("Enter the numbers: ");
    scanf("%d %d %d %d", &n, &a, &b, &c); 
    int ans=find_nth_term(n,a,b,c);
    printf("%d",ans);
    return 0;
}
