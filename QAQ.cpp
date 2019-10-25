#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int ln,sum=0;
    string str;
    cin>>str;
    ln=str.length();
 
    for(int i=0; i<ln; i++)
    {
        for(int j=i+1; j<ln; j++)
        {
            for(int k=j+1; k<ln; k++)
            {
                if(str[i]=='Q' && str[j]=='A' && str[k]=='Q')
                {
                    sum++;
                }
            }
        }
    }
    cout<<sum<<endl;
 
    return 0;
}
