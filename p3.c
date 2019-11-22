#include<stdio.h>
int main(void)
{
    int n,term,sum;
    printf("enter n:");
    scanf("%d",&n);
    while(n>0)
    {
        term=n%10;
        sum+=term;
        n/=10;
    }
    printf("sum=%d",sum);
    return 0;
}