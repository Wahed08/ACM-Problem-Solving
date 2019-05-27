#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n];
    vector<int>vec;
    vector<int>::iterator it;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>arr[i];
        //vec.push_back(a);
    }
    int i,j;
    for(i=0; i<n; i++)
    {
        if(arr[i]>k){
            break;
        }
        sum++;
    }
    for(j=n-1; j>i; j--){
        if(arr[j]>k){
            break;
        }
        sum++;
    }
    cout<<sum<<endl;

    return 0;
}
