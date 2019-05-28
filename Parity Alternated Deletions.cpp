#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long int n,i,sum=0;
    vector<long int>vec,vec2;
    long int a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0){
            vec.push_back(a);

        }
        else vec2.push_back(a);
    }

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    sort(vec2.begin(),vec2.end());
    reverse(vec2.begin(),vec2.end());


    int x= min(vec2.size(),vec.size());

    for(i=x+1;i<vec2.size() ;i++)
    {
        sum=sum+vec2[i];
    }

    for(i=x+1;i<vec.size() ;i++)
    {
        sum=sum+vec[i];
    }

    cout<<sum<<endl;
}
