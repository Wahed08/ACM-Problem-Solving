#include<bits/stdc++.h>
#include<algorithm>
 
using namespace std;
int main()
{
    long int n;
    int one=0,zero=0;
    cin>>n;
 
    string str;
    cin>>str;
 
        for(int i=0; i<n; i++)
        {
            if(str[i]=='1'){
                one++;
            }
            else if(str[i]=='0'){
                zero++;
            }
        }
        if(one>zero)
            cout<<one-zero<<endl;
        else
            cout<<zero-one<<endl;
 
 
    return 0;
}
