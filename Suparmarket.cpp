#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    double mn=INT_MAX,val;
    for(int i=0; i<n; i++)
    {
        double a,b;
        cin>>a>>b;
        val=a/b;
        mn=min(val,mn);
    }
    printf("%.8f\n",mn*m);

    return 0;
}
