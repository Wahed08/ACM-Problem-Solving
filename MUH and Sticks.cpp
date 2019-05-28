#include<bits/stdc++.h>
using namespace std;
int arr2[1000];

int main()
{
    ios_base::sync_with_stdio(false);

    int arr[1000],sum,cnt=0;
    vector<int>vec;
    vector<int>::iterator it;

    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
        vec.push_back(arr[i]);
    }
    for(int i=0; i<6; i++)
    {
        sum=1;
        for(int j=i+1; j<6; j++)
        {
            if(vec[i]==arr[j])
            {
                sum++;
            }
        }
        cnt=max(cnt,sum);
    }
    if(cnt<4)
    {
        cout<<"Alien"<<endl;
        return 0;
    }

    sort(vec.begin(),vec.end());
    int x=vec[3];

    for (int i = 0 ; i < 6 && vec.size() > 2 ; i++)
    {
        it=find(vec.begin(),vec.end(),x);
        vec.erase(it);

    }
    if(vec[0]==vec[1])
        cout<<"Elephant"<<endl;
    else
        cout<<"Bear"<<endl;

    return 0;
}
