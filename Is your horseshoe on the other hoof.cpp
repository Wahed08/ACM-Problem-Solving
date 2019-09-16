#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int arr[5];
    int Count=0;
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }
 
    set<int>x;
 
    for(int i=0; i<4; i++)
    {
        x.insert(arr[i]);
    }
    cout<<4-x.size()<<endl;
 
    return 0;
}
