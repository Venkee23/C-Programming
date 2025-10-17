#include<stdio.h>
int primeno(int i);
int main()
{
    int a,n,i;
    scanf("%d%d",&a,&n);
    for(i=a;i<=n;i++)
    {
    if(primeno(i)==0&&i!=0)
    {
       printf("%d ",i);
    }
    }
}
int primeno(int i)
{
    int j,count=0;
    for(j=2;j<=i/2;j++)
    {
    if(i%j==0)
    {
        count++;
        break ;
    }
    }
    return count;
}

    
