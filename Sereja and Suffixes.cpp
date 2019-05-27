#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n,m,arr[100005],arr2[100005];
    cin>>n>>m;

    set<int>st;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int j;
    for(j=n-1; j>=0; j--)
    {
        st.insert(arr[j]);

        arr2[j]=st.size();
    }


    for(int i=0; i<m; i++)
    {
        int l;
        cin>>l;
        cout<<arr2[l-1]<<endl;
    }
    return 0;
}
