#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int arr[4];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
 
    int x=min(arr[0],arr[1]);
    int y=min(arr[1],arr[2]);
 
    if(arr[0]*2+arr[1]*2<=arr[0]+arr[1]+arr[2])
        cout<<arr[0]*2+arr[1]*2<<endl;
    else
        cout<<arr[0]+arr[1]+arr[2]<<endl;
 
    return 0;
}
