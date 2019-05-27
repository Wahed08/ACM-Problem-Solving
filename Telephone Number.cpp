#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        cin>>n>>str;
        int k=n-11,flag=INT_MAX;

        for(int j=0; j<n; j++)
        {
            if(str[j]=='8')
           flag=min(flag,j);
        }
        if(n-flag>=11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
