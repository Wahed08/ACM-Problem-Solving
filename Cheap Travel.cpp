#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if (m * a <= b)
        cout << n * a << endl;
    else
        cout << (n/m) * b + min((n%m) * a, b) << endl;

    return 0;
}
