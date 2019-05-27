#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,flag=0,k,sum;
    string str;
    cin>>n>>str;
    vector<int>vec;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='x')
        {
            if(flag==0)
            {
                cnt++;
                flag=0;
            }
        }
        else
        {
            vec.push_back(cnt);
            cnt=0;
            flag=0;
        }
    }
    if(str[n-1]=='x')
    {
        vec.push_back(cnt);
    }
    sum=0;

    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]>2){
            sum=sum+(vec[i]-2);
        }
    }

    cout<<sum<<endl;

    return 0;
}
