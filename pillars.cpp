#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
 
    int n;
    cin>>n;
 
    int arr[n],arr2[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr,arr+n);
 
    int k;
    for(int i=0; i<n; i++)
    {
        if(arr2[i]==arr[n-1])
        {
            k=i;
            break;
        }
    }
    //cout<<k<<endl;
    vector<int>vec,vec2,vec3,vec4;
 
//    for(int i=0; i<k-1; i++){
//        arr3[i]=arr2[i];
//    }
 
    for(int i=0; i<k; i++)
    {
        vec.push_back(arr2[i]);
        vec3.push_back(arr2[i]);
    }
 
    for(int i=k; i<n; i++)
    {
        vec2.push_back(arr2[i]);
        vec4.push_back(arr2[i]);
    }
 
    sort(vec.begin(),vec.end());
    sort(vec2.begin(),vec2.end());
    reverse(vec2.begin(),vec2.end());
 
    int cnt=0,flag=0;
 
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]==vec3[i])
        {
            cnt++;
        }
    }
    for(int i=0; i<vec2.size(); i++)
    {
        if(vec2[i]==vec4[i])
        {
            flag++;
        }
    }
    if(cnt==vec.size() && flag==vec2.size())
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
 
 
    return 0;
}
