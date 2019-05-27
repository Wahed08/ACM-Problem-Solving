#include<bits/stdc++.h>
using namespace std;

int myf(int a,int b)
{
    return a>b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,sum=0,cnt=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    double val=0;
    val=1.0*sum/n;

    if(val>=4.5)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]<5)
            {
                int a=5-arr[i];
                arr[i]+=a;
                cnt++;
            }
            sum=0,val=0;
            for(int j=0; j<n; j++)
            {
                sum+=arr[j];
            }
            val=1.0*sum/n;
            // cout<<val<<" ";
            if(val>=4.5)
            {
                cout<<cnt<<endl;
                return 0;
                //break;
            }
        }
    }
    // cout<<cnt<<endl;

    return 0;
}
