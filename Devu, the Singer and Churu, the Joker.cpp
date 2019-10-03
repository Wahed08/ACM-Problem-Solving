#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,d,arr[105];
    cin>>n>>d;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    int x=sum+(n-1)*10;
    if(x<=d)
        cout<<(d-sum)/5<<endl;
    else
        cout<<-1<<endl;
 
    return 0;
}
