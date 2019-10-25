#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,k,x,y;
    cin>>n>>k;
 
    x=n/k;
    y=floor(x);
    if(y%2!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
    return 0;
}
