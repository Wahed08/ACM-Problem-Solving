#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int n,k,m;
    vector<long long>vec;

    scanf("%lld %lld",&n,&k);

    for(long i=1; i<=n; i++)
    {
        scanf("%lld",&m);
        vec.push_back(m);
    }
    long long arr[n];

    for(long i=1; i<=n; i++)
    {
        if(k-i>0)
        {
            k-=i;
        }
        else
        {
            cout<<vec[k-1]<<endl;
            break;
        }
    }

    return 0;
}
