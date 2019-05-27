#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int t,n,sum,cnt,k,i;
    cin>>t;

    while(t--)
    {
        sum=0;
        cin>>n;
        cnt=n*(n+1)/2;

        for(i=1; ;i++)
        {
            sum+=pow(2,i);

            if(pow(2,i)>n)
            {
                sum-=pow(2,i);
                break;
            }
        }
        k=cnt-(2*sum);
        cout<<k-2<<endl;
    }

    return 0;
}
