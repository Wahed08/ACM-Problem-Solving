#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int sum = 0,d =0;
    for(int i =2 ; i< n ; i++)
    {
        int t,p;
        t = i;
        p = n;

        while(p!=0)
        {
            sum += p%i;
            p/=i;
        }
        d++;
    }
    int g = __gcd(sum,d);

    cout<<sum/g<<'/'<<d/g<<endl;

    return 0;
}
