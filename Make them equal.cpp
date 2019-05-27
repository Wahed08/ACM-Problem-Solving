#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    set<int>st;
    set<int>::iterator it;
    vector<int>vec;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        st.insert(arr[i]);
    }
    if(st.size()>3){
        cout<<-1<<endl;
        return 0;
    }
    if(st.size()==1){
        cout<<0<<endl;
        return 0;
    }
    for(it=st.begin(); it!=st.end(); it++){
        vec.push_back(*it);
    }
    if(vec.size()==3){
        if(vec[2]-vec[1]==vec[1]-vec[0]){
            cout<<vec[1]-vec[0]<<endl;
        }
        else
            cout<<-1<<endl;
    }
    if(vec.size()==2){
        if((vec[1]-vec[0])%2==0){
            cout<<(vec[1]-vec[0])/2<<endl;
        }else
        cout<<vec[1]-vec[0]<<endl;
    }

    return 0;
}
