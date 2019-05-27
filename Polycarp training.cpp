#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n;
    cin>>n;
    int arr[n],arr2[n];
    set<int>st;
    set<int>::iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
//    for(int i=0; i<n; i++){
//        st.insert(arr[i]);
//    }
//    int j=0;
//    for(it=st.begin(); it!=st.end(); it++){
//        arr2[j]=*it;
//        j++;
//    }
    sort(arr,arr+n);

    int sum=1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>=sum)
        {
            sum++;
        }
    }
    cout<<sum-1<<endl;

    return 0;
}
