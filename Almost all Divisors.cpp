#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;
        long long int arr[k],arr2[k];
        vector<long long>vec;

        for(int i=0; i<k; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+k);
        long long int val=arr[0]*arr[k-1];
        long long int cnt=0,j=0;

        for(int i=2; i<=sqrt(val); i++)
        {
            if(val%i==0)
            {
                if(val/i==i){
                    vec.push_back(i);
                    //j++;
                }
                else
                {
                    vec.push_back(i);
                    //j++;
                   vec.push_back(val/i);
                    //j++;
                }
            }
        }
        //sort(arr2,arr2+k);
        sort(vec.begin(),vec.end());

        for(int i=0; i<vec.size(); i++)
        {
            if(arr[i]==vec[i])
            {
                cnt++;
            }
        }
        if(cnt==vec.size())
        {
            cout<<val<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
