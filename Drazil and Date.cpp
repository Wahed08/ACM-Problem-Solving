#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int a,b,s;
    cin>>a>>b>>s;
 
     if(a==0 and b==0 and s==2)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    if(abs(a)+abs(b)>s){
        cout<<"No"<<endl;
        return 0;
    }
 
    if(abs(a)+abs(b)==s || (s-(abs(a))+abs(b))%2==0)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else{
        cout<<"No"<<endl;
        return 0;
    }
 
    return 0;
}
