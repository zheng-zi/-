#include<stdio.h>
int main(void)
{
    int a,n,i,num,sum;
    scanf("%d",&a);
    scanf("%d",&n);
    num=0;
    sum=0;
    for(i=1;i<=n;i++)
    {
        num=num*10+a;
        sum+=num;

    }
    printf("%d",sum);
    return 0;

}