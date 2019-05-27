#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=0,x,y;
    cin>>n;
    int arr[n],arr2[n];
    int m=n/2;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i>=m){
            arr2[j]=arr[i];
            j++;
        }
    }

    while(1)
    {
        if(is_sorted(arr,arr+n)){
            x=n;
            break;
        }else
        n/=2;
    }

    while(1)
    {
         if(is_sorted(arr2,arr2+m)){
            y=m;
            break;
        }else
        m/=2;
    }
    if(x>=y)
        cout<<x<<endl;
    else
        cout<<y<<endl;

    return 0;
