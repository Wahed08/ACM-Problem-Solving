#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    long long int n,m,k,sum,flag,val;
    cin>>n>>m>>k;

    long long int arr[n];
    for(long i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    sum=arr[n-1],flag=arr[n-2];
    val=(m/(k+1))*(sum*k+flag)+(m%(k+1))*sum;
   // cout << m / (k + 1) * 1ll * (a[0] * 1ll * k + a[1]) + m % (k + 1) * 1ll * a[0] << endl;

    cout<<val<<endl;


    return 0;
}
