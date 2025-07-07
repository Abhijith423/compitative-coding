#include <stdio.h>
int main()
{
    float d,l,m,g,e;
    printf("enter the Qty of fuel and distance:");
    scanf("%f%f",&l,&d);
    if(l<=0 || d<=0)
    {
        printf("invalid input:");
    }
    else 
    {
        e=(l/d)*100;
        printf("fuel eff. = %.2f L/100KM",e);
        m=d*0.6214;
        g=l*0.2642;
        printf("\nfuel eff. = %.2f Miles/Gallon",m/g);
    }
    return 0;
}
