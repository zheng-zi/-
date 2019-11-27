#include <stdio.h>
int main(void)
{
    int a,b,c;
    for(a=2;a<=100;a++)
    {
        c=1;
        for(b=2;b<a;b++)
        {
            if(a%b==0)
            {
                c=0;
            }
        }
            if(c==1)
            printf("%d\n",a);
            
    }
}