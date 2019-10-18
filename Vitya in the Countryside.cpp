#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    
    int n,arr[101],arr2[101],sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    if(n==1 && arr[0]==15)
    {
        cout<<"DOWN"<<endl;
        return 0;
    }
    if(n==1 && arr[0]==0){
        cout<<"UP"<<endl;
        return 0;
    }
    if(n==1 && (arr[0]!=15 || arr[0]!=0)){
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(arr[n-1]==15)
        {
            cout<<"DOWN"<<endl;
            return 0;
        }
        else if(arr[n-1]==0)
        {
            cout<<"UP"<<endl;
            return 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[n-2]<arr[n-1])
        {
            cout<<"UP"<<endl;
            return 0;
        }
        else
        {
            cout<<"DOWN"<<endl;
            return 0;
        }
    }
 
  
