#include <bits/stdc++.h>
using namespace std;
 
void primeFactors(int n)
{
    cout<<n/2<<endl;
    if(n==3){
        cout<<"3"<<endl;
        return;
    }
    while(n-2>=0)
    {
        cout<<"2"<<" ";
        n-=2;
         if(n==3)
        {
            cout<<n<<" ";
            n=0;
            break;
        }
    }
 
    for(int i=3; i*i<=n; i+=2)
    {
        while(n-i>=0)
        {
            cout<<i<<" ";
            n-=i;
        }
    }
 
    if(n>2)
        cout<<n<<" ";
    cout<<endl;
 
}
 
int main()
{
    int n;
    cin>>n;
 
    primeFactors(n);
 
    return 0;
}
