#include<iostream>
 
using namespace std;
int main()
{
    long n,x,y;
    cin>>n;
 
    if(n%2==0)
    {
        y=8;
          x=n-y;
    }
    if(n%2!=0)
    {
        y=9;
        x=n-y;
    }
    cout<<x<<" "<<y<<endl;
 
    return 0;
}
