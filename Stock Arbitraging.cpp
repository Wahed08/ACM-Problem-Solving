#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int arr[n],arr2[m];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    sort(arr,arr+n);
    sort(arr2,arr2+m);

    if(arr[0]>=arr2[m-1])
        cout<<r<<endl;
    else{
        int k=r/arr[0];
        k=k*arr2[m-1];
        int val=r%arr[0];
        cout<<k+val<<endl;
    }

 return 0;
}
