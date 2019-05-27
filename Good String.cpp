#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n;
    string str,str2;
    cin>>n>>str;
    vector<char>vec;


    for(int i=0; i<n-1; i++)
    {
        if(str[i]!=str[i+1])
        {
            str2+=(str[i]);
            str2+=(str[i+1]);
            i++;
        }
    }
    cout<<n-str2.size()<<endl;
    cout<<str2<<endl;

    return 0;
}
