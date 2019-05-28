#include <bits/stdc++.h>
using namespace std;

long long int nirvana(string str)
{
    long long int cnt=1;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='0')
            continue;
            cnt*=str[i]-'0';
    }
    return cnt;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    
    string str;
    cin>>str;

    long long int cnt=nirvana(str);

    for(int i=0; i<str.length(); i++){
        string str2=str;
        str2[i]=(char) (str2[i]-1);

        for(int j=i+1; j<str.length(); j++){
            str2[j]='9';
        }
        cnt=max(cnt,nirvana(str2));
    }
    cout<<cnt<<endl;

    ret
