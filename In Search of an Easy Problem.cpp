#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,arr[101],flag=0,cnt=0;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            flag++;
        }
    }
    if(flag==n)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
 
 
    return 0;
}
