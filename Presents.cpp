#include<iostream>
 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[110];
    int x[n+10];
 
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<n; i++)
    {
        arr[x[i]]=i+1;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
    return 0;
}
