
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int a,b,t,q,x,y;
 
    cin>>q;
 
    for(int i=0; i<q; i++){
        cin>>a>>b>>t;
 
        x=t/2;
        y=t-x;
        cout<<y*a-b*x<<endl;
 
    }
 
 return 0;
}
