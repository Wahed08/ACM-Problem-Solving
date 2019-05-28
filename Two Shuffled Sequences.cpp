#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n+1];

    vector<int>vec;
    vector<int>vec2;
    int cnt=0;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(i=0; i<n-1; i++)
    {
        cnt=1;

        while(arr[i]==arr[i+1] && i<n-1)
        {
            cnt++;
            if(cnt>2)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            i++;
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            vec.push_back(arr[i]);
        }
        else
            vec2.push_back(arr[i]);
    }
    cout<<"YES"<<endl;
    cout<<vec.size()<<endl;
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<vec2.size()<<endl;
    for(i=vec2.size()-1; i>=0; i--)
    {
        cout<<vec2[i]<<" ";
    }
    cout<<endl;

    return 0;
}
