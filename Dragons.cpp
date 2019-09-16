#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int a,b,Count=0,x;
    int arr[10005],arr1[10005];
 
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>arr[i]>>arr1[i];
    }
 
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<b-i-1; j++)
        {
 
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swap(arr1[j],arr1[j+1]);
            }
        }
 
    }
    for(int i=0; i<b; i++)
    {
        if(a>arr[i])
        {
            Count++;
        }
        a=a+arr1[i];
    }
    if(Count==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
    return 0;
}
