#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n,a,b,cnt=0,cnt1=0;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
 
        if(a>b)
            cnt++;
        else if(b>a)
            cnt1++;
 
    }
    if(cnt>cnt1)
 
        cout<<"Mishka"<<endl;
 
     else if(cnt<cnt1)
 
        cout<<"Chris"<<endl;
 
    else
        cout<<"Friendship is magic!^^"<<endl;
 
    return 0;
}
