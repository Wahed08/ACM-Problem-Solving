#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,s,sum=0,cnt=0;
    scanf("%lld%lld",&n,&s);
    long long int arr[n];
    vector<long long>vec;

    for(long i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
        vec.push_back(arr[i]);
    }
    sort(vec.begin(),vec.end());

    for(long i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    if(sum<s)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(sum==s){
        cout<<0<<endl;
        return 0;
    }
    long k=vec[0];
    long long int y;

    for(long i=0; i<n; i++){
        s-=arr[i]-k;
    }
    if(s<=0){
        cout<<k<<endl;
    }else{
        y=ceil((k-(s+n-1)/n));
        cout<<y<<endl;
    }

    return 0;
}
