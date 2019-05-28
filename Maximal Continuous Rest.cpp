#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,sum=0,flag=0;
    cin>>n;
    int ln=n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n*2; i++)
    {
        if(arr[i%n]==1)
        {
            sum++;
            k=max(sum,k);
        }
        else
            sum=0;
    }
    cout<<k<<endl;

    return 0;
}
