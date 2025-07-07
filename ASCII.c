#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter 4 numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    char p,q,r,s;
    p=(char)a;
    q=(char)b;
    r=(char)c;
    s=(char)d;
    printf("%d - %c",a,p);
    printf("\n%d - %c",b,q);
    printf("\n%d - %c",c,r);
    printf("\n%d - %c",d,s);
}
