#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n;
    int a[5],b[5];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }
    cin>>n;
    int sum=0,flag=0;
    sum+=a[0]+a[1]+a[2];
    flag+=b[0]+b[1]+b[2];
 
    sum=(sum+5-1)/5;
    flag=(flag+10-1)/10;
    if(sum+flag<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
    return 0;
}
