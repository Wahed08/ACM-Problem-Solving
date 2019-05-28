#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int cnt=0,a,b;
    cin>>a>>b;

    while(a>0 and b>0)
    {
        if(a>=b)
        {
            cnt+=a/b;
            a=a%b;
        }
        else
        {
            cnt+=b/a;
            b=b%a;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
