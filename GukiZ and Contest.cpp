#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,arr[2005],arr2[2005],k;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    reverse(arr2,arr2+n);
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr2[j])
            {
                k=j+1;
                break;
            }
        }
        cout<<k<<" ";
    }
    cout<<endl;
 
    return 0;
}
