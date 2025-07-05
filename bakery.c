#include <stdio.h>

int main()

{   
    int a,b,c,x;
    printf("Enter the no of pizzas");
    scanf("%d",&a);
     printf("Enter the no of puffs");
    scanf("%d",&b);
     printf("Enter the no of cool drinks");
    scanf("%d",&c);
    
    
    x=a*100+b*20+c*10;
    printf("total %d\n",x);
    
    return 0;
}
