#include<stdio.h>
int main(void)
{
    int x;
    for(x=2;x<=100;x++)
    {
        int i,c=1;
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                c=0;
            } 
        }
            if(c==1)
            printf("%d\n",x);
    }
    return 0;
}