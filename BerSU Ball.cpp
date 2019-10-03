#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int boy,girl,arr[105],arr2[105],cnt=0;
    cin>>boy;
 
    for(int i=0; i<boy; i++)
    {
        cin>>arr[i];
    }
    cin>>girl;
 
    for(int i=0; i<girl; i++)
    {
        cin>>arr2[i];
    }
    sort(arr,arr+boy);
    sort(arr2,arr2+girl);
 
    int mn=max(boy,girl);
 
    for(int i=0; i<boy; i++)
    {
        for(int j=0; j<girl; j++)
        {
            if(abs(arr[i]-arr2[j])<2)
            {
                arr2[j]=1000;
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
 
    return 0;
}
