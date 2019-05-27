#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    int cnt=0;
    cin>>n>>m;
    int arr[n],arr2[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    double d;
    for(int i=0; i<n; i++)
    {
        d=ceil(1.0*arr[i]/m);
        arr2[i]=d;
    }
    int y=0,j;
    for(int i=0; i<n; i++)
    {
       // y=max(arr[i],y);
        if(y<=arr2[i])
        {
            y=arr2[i];
            j=i;
        }
    }
    cout<<j+1<<endl;

    return 0;
}
