#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n,sum=0,cnt=0;
    cin>>n;
    string str;
    cin>>str;
    long long flag=n-10;

    for(int i=0; i<flag; i++){
        if(str[i]=='8'){
            sum++;
        }
    }
    cnt=flag-sum;

    if(cnt>sum)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
