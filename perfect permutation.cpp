#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105],sum=0;
    cin>>n;
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=n-i;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=i+1){
            sum++;
        }
    }
    if(sum==n)
    {
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
