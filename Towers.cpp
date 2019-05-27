#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,arr[1005],sum=1;
    cin>>n;
    set<int>st;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int Count=1,k=arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
            Count++;
        else{
            if(Count>sum){
                sum=Count;
                k=arr[i-1];
            }
            Count=1;
        }
    }
    if(Count>sum){
        sum=Count;
        k=arr[n-1];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            cnt++;
        }
    }

    for(int i=0; i<n; i++)
    {
        st.insert(arr[i]);
    }
    if(cnt==1)
        cout<<"1"<<" "<<st.size()<<endl;
    else
        cout<<sum<<" "<<st.size()<<endl;

    return 0;
}
