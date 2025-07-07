#include<iostream>
using namespace std;
int main()
{
    int T,g=0,max=0,i;
    cout<<"enter time in Hrs.:";
    cin>>T;
    int E[T],L[T];
    cout<<"enter guest entering in each hrs.";
    for(i=0;i<=T-1;i++)
    {
        cin>>E[i];
    }
    cout<<"enter guest leaving in each hrs.";
    for(i=0;i<=T-1;i++)
    {
        cin>>L[i];
    }
    for(i=0;i<=T-1;i++)
    {
        g=g+(E[i]-L[i]);
        if(max<g)
        {
            max=g;
        }
    }
    cout<<"max. no of guest = "<<max;
}
