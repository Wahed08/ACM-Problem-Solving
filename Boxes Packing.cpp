#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n;
    cin>>n;
    long long int arr[n];
    vector<long>vec;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    //sort(vec.begin(),vec.end());
    int sum=0,cnt;

    for(int i=0; i<vec.size(); i++)
    {
        cnt=0;
        for(int j=0; j<vec.size(); j++)
        {
            if(vec[i]==vec[j])
            {
                cnt++;
            }
        }
        if(cnt>sum)
            sum=cnt;
    }
    cout<<sum<<endl;

    return 0;
}
