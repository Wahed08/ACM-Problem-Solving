#include <bits/stdc++.h>
using namespace std;

vector<int> c,d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int t;
        cin>>t;
        c.push_back(t);
    }
    for(int i=0;i<b;i++){
        int t;
        cin>>t;
    d.push_back(t);

    }

    for(int i=0;i<a;i++){
      if(count(d.begin(),d.end(),c[i])>0){
            cout<<c[i]<<" ";
       }
    }
    cout<<endl;

    return 0;
}
