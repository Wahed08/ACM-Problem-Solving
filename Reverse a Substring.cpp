#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n;
    cin>>n;
    cin>>str;

    for(int i=0; i<str.length()-1; i++)
    {
        if(str[i]>str[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
