#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;

    cin>>t;

    for(int i=0; i<t; i++){
        int n,cnt;
        cin>>n>>str;

        cnt=n-1;
        for(int j=0; j<n; j++){
            if(str[j]=='>' || str[n-1-j]=='<'){
                cnt=min(cnt,j);
            }
        }
        cout<<cnt<<endl;
    }


    return 0;
}
