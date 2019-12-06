#include<stdio.h>
#include<math.h>
int isprime(int x)
{
int i;
for(i=2;i<=sqrt(x);i++)
{
    if(x%i==0)
    {
        break;
    }
    if(i>sqrt(x))
    {
        return 1;
    }
    else
    {
    return 0;
    }
    
}
}


int main(void)
{
    int n,flag;
    printf("enter n:\n");
    scanf("%d",&n);
    flag=isprime(n);

    if(flag=1)
    {
        printf("yes\n");
    }
    if(flag=0)
    {
        printf("no\n");
    }
}