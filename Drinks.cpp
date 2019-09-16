#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    float n,arr[105],sum=0;
    double x;
    cin>>n;
 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    x=sum/n;
 
    cout<<x<<endl;
 
 return 0;
}
