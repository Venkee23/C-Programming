#include<iostream>
#include<cmath>
using namespace std;
class quadratic{
      int desc,r1,r2,a,b,c,real,img;
      public:
      quadratic(int a1,int b1,int c1)
      {
        a=a1;
        b=b1;
        c=c1;
      }
      void roots();
};
void quadratic :: roots(){
    desc=(b*b)-(4*a*c);
    if(desc>0)
    {
        r1=((-b)+sqrt(desc))/(2*a);
        r1=((-b)-sqrt(desc))/(2*a);
        cout<<"The real roots are : "<<r1<<" and "<<r2<<endl;
    }
    else if(desc==0)
    {
        r1=r2=(-b)/(2*a);
        cout<<"The real and equal roots are : "<<r1<<" and "<<r2<<endl;
    }
    else if(desc<0)
    {
         real=(-b)/(2*a);
         img=(sqrt(-desc))/(2*a);
         cout<<"The imaginary roots are : "<<real<<" + "<<img<<"i"<<" and "<<real<<" - "<<img<<"i"<<endl;
    }
}
int main(){
    quadratic root(1,3,2);
    root.roots();
    return 0;
}
