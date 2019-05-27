#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int sum=0;
    for(int i=0; i<n; i++)
        if(str[i]=='-')
            sum++;
    if(sum==n)
    {
        cout<<0<<endl;
        return 0;
    }
    sum=0;
    for(int i=0; i<n; i++)
        if(str[i]=='+')
            sum++;
    if(sum==n)
    {
        cout<<sum<<endl;
        return 0;
    }
    sum=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='+')
        {
            sum++;
        }
        else if(str[i]=='-' && sum>0)
        {
            sum--;
        }
    }
    cout<<sum<<endl;

    return 0;
}
