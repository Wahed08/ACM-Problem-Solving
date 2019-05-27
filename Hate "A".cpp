#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str,str2;
    cin>>str;
    vector<char>vec;
    int sum=0,cnt=0;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='a'){
            cnt++;
        }
    }
    if(cnt==str.length()){
        cout<<str<<endl;
        return 0;
    }
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!='a')
        {
            vec.push_back(str[i]);
        }
    }
    int ln=vec.size(),k;
    int n=vec.size()/2;

    if(ln%2!=0)
    {
        cout<<":("<<endl;
        return 0;
    }

    string prefix=str.substr(str.length()-n);
    //cout<<prefix<<endl;

    for(int i=0; i<prefix.length(); i++)
    {
        if(prefix[i]==vec[i])
        {
            sum++;
            k=ln-i;
        }

    }
   // cout<<k<<" "<<sum<<endl;
    if(sum==n)
    {
        for(int i=0; i<str.length()-n; i++)
        {
            cout<<str[i];
        }
        cout<<endl;
    }
    else
        cout<<":("<<endl;


    return 0;
}
