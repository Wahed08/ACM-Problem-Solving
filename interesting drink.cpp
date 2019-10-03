#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,sum=0,i,j,q;
    scanf("%I64d",&n);
 
    long long int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%I64d",&arr[i]);
    }
    scanf("%I64d",&q);
 
    long long int arr2[q];
    for(i=0; i<q; i++)
    {
        scanf("%I64d",&arr2[i]);
    }
    sort(arr,arr+n);
 
    for(i=0; i<q; i++)
    {
        cout<<upper_bound(arr,arr+n,arr2[i])-arr<<endl;
    }
 
    return 0;
}
