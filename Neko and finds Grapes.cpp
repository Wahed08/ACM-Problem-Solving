#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    long long int arr[n],arr2[m];

    for(long i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(long i=0; i<m; i++)
    {
        cin>>arr2[i];
    }
    long sum=0,flag=0,sum1=0,flag1=0;

    for(long i=0; i<n; i++){
        if(arr[i]%2==0){
            sum++;
        }else
        flag++;
    }
     for(long i=0; i<m; i++){
        if(arr2[i]%2==0){
            sum1++;
        }else
        flag1++;
    }
    cout<<min(sum,flag1)+min(flag,sum1)<<endl;

    return 0;
}
