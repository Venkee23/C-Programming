#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	int cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		cnt=cnt*i;
	}
	printf("%d",cnt);
}
