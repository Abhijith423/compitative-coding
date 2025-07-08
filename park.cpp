#include<iostream>
using namespace std;
int main()
{
    int R,C,count,max=0,index;
    cout<<"enter no. of row and column:";
    cin>>R>>C;
    int p[R][C];
    cout<<"enter array elements: 0/1";
    for(int i=0;i<=R-1;i++)
    {
        for(int j=0;j<=C-1;j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<"array elements are:"<<"\n";
    for(int i=0;i<=R-1;i++)
    {
        for(int j=0;j<=C-1;j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<=R-1;i++)
    {
        count=0;
        for(int j=0;j<=C-1;j++)
        {
            if(p[i][j]==1)
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            index=i;
        }
    }
    cout<<"index number = "<<index;
}
