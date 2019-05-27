#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
long long int n,l,r=1,sol;
vector<int> all;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    all.resize(n);
    for(int i=0; i<n; i++)
        cin>>all[i];
    sort(all.begin(),all.end());
    while(r<n)
    {
        if(all[l]<all[r])
        {
            l++;
            r++;
            sol++;
        }
        else
            r++;
    }
    cout<<sol<<endl;
    return 0;
}
