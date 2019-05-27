#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<long long>vec;
    long long  sum=0;
    
    for(int i=0; i<n; i++)
    {
        long long a,b;
        cin>>a>>b;
        vec.push_back(a-b);
        sum+=(b*n)-a;
    }
    sort(vec.begin(),vec.end());
    int k=0;
    for(long i=n; i>=1; i--)
    {
        sum+=i*vec[k];
        k++;
    }
    cout<<sum<<endl;
    
    return 0;
}
