#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int r,x,y,x1,y1,sum=0;
    cin>>r>>x>>y>>x1>>y1;

    double d=sqrt(((pow(abs(x1-x),2))+(pow(abs(y1-y),2))));

    cout<<ceil(d/(2*r))<<endl;

    return 0;
}
