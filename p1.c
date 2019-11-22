#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,a,n,s;
    printf("a=");
    scanf("%d",&a);
    printf("n=");
    scanf("%d",&n);
    s=0;
    for(i=1;1<=n;i++)
    {
    s+=a/pow(10,n-1)-1;
    
    }
    printf ("s=%d",s);
    return 0;
}