#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,arr[20],cnt=0;
    cin>>n;
    string str;
    cin>>str;

    for(int i=1; i<10; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<str.size(); i++)
    {
        if(arr[(str[i]-'0')]>str[i]-'0')
        {
            str[i]=arr[(str[i]-'0')]+'0';
            cnt=1;
        }
        else if(cnt==1 && arr[(str[i]-'0')]<str[i]-'0')
            break;

    }
    cout<<str<<endl;

    return 0;
}
