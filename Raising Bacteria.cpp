#include<bits/stdc++.h>
 
using namespace std;
int main()
{
   long int n,cnt,sum=0;
   int arr[100000];
 
   cin>>n;
   int i=0;
    while(n>0){
 
        arr[i]=n%2;
       n/=2;
       i++;
    }
 
    for(int j=i-1; j>=0; j--){
        if(arr[j]==1){
            sum++;
        }
    }
    cout<<sum<<endl;
 
 return 0;
}
 
