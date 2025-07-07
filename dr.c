#include <stdio.h>
int main()
{
    int age[20],n,income=0;
    printf("enter no.of patients:");
    scanf("%d",&n);
    printf("enter age of %d patients",n);
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&age[i]);
        if(age[i]<=0 || age[i]>120)
        {
            printf("wrong input!! enter a proper age:");
            i--;
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        if(age[i]<17)
        income+=200;
        else if(age[i]>=17&&age[i]<=40)
        income+=400;
        else
        income+=300;
    }
    printf("income = %d",income);
}



