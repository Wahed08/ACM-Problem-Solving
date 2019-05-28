#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum;
    cin>>n;
    int arr[10001];

    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<4; j++)
        {
            cin>>a;
            sum+=a;
        }
        arr[i]=sum;
    }
    int k=arr[0];
    sort(arr,arr+n);
    reverse(arr,arr+n);

    int x;
    for(int i=0; i<n; i++)
    {
        if(k==arr[i])
        {
            x=i+1;
            break;
        }
    }
    cout<<x<<endl;

    return 0;
}
