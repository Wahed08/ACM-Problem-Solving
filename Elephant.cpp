#include<iostream>
#include<cmath>
#include<algorithm>
 
using namespace std;
int main()
{
     double n,x,y;
    cin>>n;
 
    if(n==1 || n==2 || n==3 || n==4 || n==5)
        cout<<"1"<<endl;
 
    else
    {
        if(n>5)
        {
            x=n/5;
            y=ceil(x);
 
        }
        cout<<y<<endl;
    }
 
    return 0;
}
