#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n;
    int cnt=0;
 
    cin>>n;
    char str[1001][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>str[i][j];
        }
    }
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(str[i][j*3]=='O' && str[i][j*3+1]=='O')
            {
                cnt=1;
                str[i][j*3]='+';
                str[i][j*3+1]='+';
                break;
            }
        }
       if(cnt==1) break;
 
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<str[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
 
    return 0;
}
