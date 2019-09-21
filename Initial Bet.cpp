#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int arr[101];
    int sum=0;
 
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        sum+=arr[i];
    }
    if(sum>0 && sum%5==0)
        cout<<sum/5<<endl;
    else
        cout<<"-1"<<endl;
 
 return 0;
}
