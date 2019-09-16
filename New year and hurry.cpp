#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n,k,z=5,flag=0,x=0;
    cin>>n>>k;
 
    x=240-k;
 
    while(n--)
    {
        if(x>=z)
        {
            x=x-z;
            flag++;
            z=z+5;
        }
 
    }
    cout<<flag<<endl;
 
    return 0;
}
