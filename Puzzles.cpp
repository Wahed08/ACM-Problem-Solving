#include<iostream>
#include<algorithm>
 
using namespace std;
int main()
{
 
    int n,m;
    int arr[1000];
    cin>>n>>m;
 
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
 
    int best=arr[n-1]-arr[0];
    
    for(int k=1; k<=m-n; k++)
    {
        if(arr[k+n-1]-arr[k]<best)
            best=arr[k+n-1]-arr[k];
    }
 
    cout<<best<<endl;
 
    return 0;
}
 
