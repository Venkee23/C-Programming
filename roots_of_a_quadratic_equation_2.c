#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,dis,root1,root2,real,image;
	scanf("%lf%lf%lf",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis>0)
	{
		root1=(-b+sqrt(dis))/(2*a);
		root2=(-b-sqrt(dis))/(2*a);
		printf("%.2lf,%.2lf",root1,root2);
	}
	else if(dis==0)
	{
	    root1=root2=-b/(2*a);
	    printf("root1=root2=%.2lf",root1);
    }
    else
    {
        real=-b/(2*a);
        image=sqrt(-dis)/(2*a);
        printf("root1=%.2lf+%.2lfi,root2=%.2lf-%.2lfi",real,image,real,image);
	}
	return 0;
}
