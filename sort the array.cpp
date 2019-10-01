#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    int n,cnt=0,flag=0,start,end,x,y,sm=0;
    cin>>n;
    ll arr[n],arr2[n],arr3[n],temp[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
        arr3[i]=arr[i];
    }
    sort(arr2,arr2+n);
    reverse(arr3,arr3+n);
 
    for(int i=0; i<n; i++)
    {
        if(arr2[i]==arr3[i])
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<n<<endl;
        return 0;
    }
    cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr2[i]==arr[i])
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr2[i])
        {
            x=i;
            break;
        }
 
    }
 
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]!=arr2[i])
        {
            y=i;
            break;
        }
    }
    for(int i=x; i<=y; i++)
    {
        if(arr[i]!=arr2[i])
        {
            sm=1;
            break;
        }
    }
    reverse(arr+x,arr+y+1);
    for(int i=0; i<n; i++){
        if(arr[i]==arr2[i]){
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<"yes"<<endl;
        cout<<x+1<<" "<<y+1<<endl;
    }
    else
        cout<<"no"<<endl;
 
 
    return 0;
}
