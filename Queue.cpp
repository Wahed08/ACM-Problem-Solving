#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum,cnt=0;
    cin>>n;
    long long int arr[n];
    vector<long>vec;
    vector<long>::iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        vec.push_back(arr[i]);
    }
    sort(vec.begin(),vec.end());

    sum=0;
    int flag=0;
    for(int i=0; i<vec.size(); i++)
    {

        if(vec[i]>=sum)
        {
            flag++;
            sum+=vec[i];
        }
    }
    cout<<flag<<endl;

    return 0;
}
