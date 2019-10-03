#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,sum=0,flag;
    cin>>n;
    long long int i,j;
    vector<long long int>vec;
 
    for(i=0; i<n; i++)
    {
        unsigned long long int a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
 
    for(i=0; i<n; i++)
    {
        sum+=vec[i];
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
        return 0;
    }
    else
    {
        for(j=0; j<n; j++)
        {
            if(vec[j]%2!=0)
            {
                sum-=vec[j];
                if(sum%2==0)
                {
                    cout<<sum<<endl;
                    break;
                    return 0;
                }
            }
        }
    }
 
 
    return 0;
}
