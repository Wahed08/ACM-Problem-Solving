#include<bits/stdc++.h>
 
using namespace std;
int main()
{
  int n,arr,sum=0,flag=0,Count=0;
  cin>>n;
 
    while(n--){
        cin>>arr;
 
        if(arr>0)
            sum+=arr;
        else if(sum>0){
            sum--;
        }
        else
           flag++;
    }
        cout<<flag<<endl;
 
 return 0;
}
