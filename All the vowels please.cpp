#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int k,flag=0,cnt=-1,val=-1,sum=0;
    cin>>k;
    string str="aeiou";

    for(int i=5; i<k; i++)
    {
        if(k%i==0)
        {
            if(k/i>=5)
            {
                flag=1;
                cnt=k/i;
                val=i;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        for(int i=0; i<val; i++)
        {
            for(int j=0; j<cnt; j++)
            {
                cout<<str[sum%5];
                sum++;
            }
            sum++;
        }
    }
    cout<<endl;

    return 0;
}
