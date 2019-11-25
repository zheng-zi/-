#include<stdio.h>
int main(void)
{
    int x,y,z;
    {
        x=0;
        while(x<=20)
        {
            y=0;
            while(y<=33)
            {
                z=0;
                while(z<=300)
                {
                    if(5*x+3*y+z/3.0==100&&x+y+z==100)
                    printf("%d %d %d\n",x,y,z);
                    z++;
                }
                y++;
            }
            x++;
        }
    }
    return 0;
}