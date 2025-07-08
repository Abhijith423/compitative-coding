#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("%d,%d",a,b);
    for(int i=3;i<=15;i++)
    {
        if(i%2==0)
        {
            b+=6;
            printf(",%d",b);
        }
        else
        {
            a+=7;
            printf(",%d",a);
        }
    }
}

