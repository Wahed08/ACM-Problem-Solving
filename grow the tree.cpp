#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
 
    int n;
    cin>>n;
 
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>vec,vec2;
 
    long long int sum=0,flag=0;
    long long int val=0;
 
    for(int i=0; i<n/2; i++)
    {
        vec.push_back(arr[i]);
    }
    for(int i=n/2; i<n; i++)
    {
        vec2.push_back(arr[i]);
    }
 
    for(int i=0; i<vec.size(); i++)
    {
        sum+=vec[i];
    }
 
    for(int i=0; i<vec2.size(); i++)
    {
        flag+=vec2[i];
    }
    val=(sum*sum)+(flag*flag);
 
    printf("%lld\n",val);
 
    return 0;
}
