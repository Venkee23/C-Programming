#include<stdio.h>
#include<math.h>
int main()
{
    int rem,sum;
    for(int i=1;i<=500;i++)
    {
        int no=i;
        sum=0;
        while(no!=0)
        {
            rem=no%10;
            sum+=rem*rem*rem;
            no=no/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
