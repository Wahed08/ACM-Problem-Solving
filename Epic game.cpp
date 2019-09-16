#include<bits/stdc++.h>
 
using namespace std;
 
int gcd(int m,int n)
{
    int r;
    while ((r = m % n) != 0)
    {
        m = n;
        n = r;
    }
    return n;
}
int main()
{
    int a,b,n,x;
    cin>>a>>b>>n;
 
    while(true){
 
    n-=gcd(a,n);
    if(n==0)
    {
        cout<<"0"<<endl;
        break;
    }
    n-=gcd(b,n);
       if(n==0)
    {
        cout<<"1"<<endl;
        break;
    }
    }
 
    return 0;
}
