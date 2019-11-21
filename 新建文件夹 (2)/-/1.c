#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,pi;
    a=1.0;
    b=1.0;
    c=1.0;
    pi=1.0;
    while (fabs(a)>=0.0001)
    {
    b=-b;
    c=c+2;
    a=b/c;
    pi=pi+a;
    }
    pi=pi*4;
    printf("pi=%.4f",pi);
    return 0;

}