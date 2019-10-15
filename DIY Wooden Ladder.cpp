#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
 
    int T;
    cin>>T;
 
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
 
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int k;
//        for(int i=n-1; i>=0; i--){
//            if(arr[i]!=arr[i-1]){
//                k=arr[i-1];
//                break;
//            }
//
//        }
        cout<<min(arr[n-2]-1,n-2)<<endl;
    }
 
    return 0;
}
