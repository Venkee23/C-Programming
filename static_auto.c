#include<stdio.h>
void ex()
{
	auto int x=10;
	x++;
	printf("%d",x);
}
int main()
{
	ex();
	ex();
	return 0;
}
