#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int m,n,cnt=0,flag=0;
    cin>>m>>n;
    char str[101][101];
 
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>str[i][j];
        }
    }
 
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[i][j]=='W' || str[i][j]=='G' || str[i][j]=='B')
                cnt++;
            else if(str[i][j]=='C' || str[i][j]=='M' || str[i][j]=='Y' || str[i][j]=='W' || str[i][j]=='G' || str[i][j]=='B')
                flag=1;
        }
    }
    if(cnt==m*n)
        cout<<"#Black&White"<<endl;
    else if(flag==1)
        cout<<"#Color"<<endl;
 
    return 0;
}
