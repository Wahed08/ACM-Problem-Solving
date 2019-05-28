#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,arr[100001];
    bool flag=false;
    cin>>n>>m;
    set<int>st;
    set<int>::iterator it;
    vector<int>vec;
    vector<int>::iterator it2;
    vector<int>vec2;

    for(int i=1; i<=m; i++){
        vec.push_back(i);
    }

    for(int i=0; i<n; i++){
        int l,r;
        cin>>l>>r;

        for(int j=1; j<=m; j++){
            if(l<=j && r>=j){
                st.insert(j);
            }
        }
    }
    cout<<m-st.size()<<endl;

    for(it=st.begin(); it!=st.end(); it++){
        for(int i=1; i<=m; i++){
            if(i==*it){
                it2=find(vec.begin(),vec.end(),i);
                vec.erase(it2);
            }
        }
    }
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

  return 0;
}
