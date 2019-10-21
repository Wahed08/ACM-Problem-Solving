#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n;
        string str;
        int sum=0,flag=0,k;
        cin>>n>>str;
        int l,r;
        int value=n;
 
        for(int i=0; i<n; i++)
        {
            if(str[i]=='0')
            {
                sum++;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(str[i]=='1')
            {
                l=i+1;
                break;
            }
        }
 
        for(int i=n-1; i>=0; i--)
        {
            if(str[i]=='1')
            {
                r=i+1;
                break;
            }
        }
 
        for(int i=0; i<n; i++)
        {
            if (str[i] == '1')
            {
                value = max(value, max((i+1)*2, (n-i)*2));
            }
        }
        cout<<value<<endl;
    }
 
    return 0;
}
