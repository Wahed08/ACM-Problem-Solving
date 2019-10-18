#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    double H,L;
    cin>>H>>L;

    double flag;

    flag=(L*L-H*H)/(2*H);

    printf("%.8lf\n",flag);


    return 0;
}
