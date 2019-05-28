#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;

    for(int i=0; i<n; i++)
    {
        cin>>str;
        int ln=str.length();
        sort(str.begin(),str.end());
        int sum=0;
        for(int j=0; j<str.length(); j++)
        {
            if(str[j]>=97 && str[j]<=122)
            {
                if(str[j+1]-str[j]==1)
                {
                    sum++;
                }
            }
        }
        if(sum==ln-1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
