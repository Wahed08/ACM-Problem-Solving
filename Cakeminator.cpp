#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,cnt=0,row[100]= {0},col[100]= {0};
    cin>>n>>m;
    string str;
 
    for(int i=0; i<n; i++)
    {
        cin>>str;
        for(int j=0; j<m; j++)
        {
            if(str[j]=='S')
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(row[i]==0 || col[j]==0)
            {
                cnt++;
            }
        }
    }
 
    cout<<cnt<<endl;
 
    return 0;
}
