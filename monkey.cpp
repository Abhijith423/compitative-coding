#include <iostream>
using namespace std;
int main()
{
   int n,m,p,k,j;
   cout<<"enter total no. of monkey:";
   cin>>n;
   cout<<"enter total no. of banana & peanut:";
   cin>>m>>p;
   cout<<"enter no. of eatable banana & peanuts:";
   cin>>k>>j;
   if(k<=0 || j<=0)
   {
       cout<<"invalid input:";
   }
   else 
   {
       n-=(m/k)+(p/j);
       if(m%k!=0 && p%j!=0)
       {
           n--;
       }
       if(n<=0)
       {
           cout<<"no. of monkey left on the tree: 0";
       }
       else
       {
           cout<<"no. of monkey left on the tree:"<<n;
       }
   }
}
