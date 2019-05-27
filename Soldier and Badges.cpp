#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,Count=0,a;
    cin>>n;
    int arr[3000];

    vector<int>vec;
    vector<int>::iterator it;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        vec.push_back(arr[i]);

        sort(vec.begin(),vec.end());

    }
    for(int i=1; i<n; i++)
    {
        if(vec[i]==vec[i-1])
           vec[i]++, Count++;

           else if(vec[i]<vec[i-1])
           {
               a=vec[i-1]-vec[i];
               vec[i]+=a,Count+=a;
               vec[i]++,Count++;
           }
    }
    cout<<Count<<endl;

    return 0;
}
