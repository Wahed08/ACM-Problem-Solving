#include<bits/stdc++.h>
using namespace std;

int myf(int a,int b)
{
    return a>b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,k,val,sum = 0,arr[2005];
    pair<int,int>p[2005];
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        p[i].first = val;
        p[i].second = i;
    }
    sort(p,p+n);
    reverse(p,p+n);

    for(int i=0; i<k; i++)
    {
        sum += p[i].first;
        arr[i] = p[i].second+1;
    }
    sort(arr,arr+k);
    arr[0]=1;
    cout << sum << endl;
    for(int i=1; i<k; i++)
        cout << arr[i]-arr[i-1] << " ";
    cout << n-arr[k-1]+1;

//    int flag=val;
//    cout<<val<<" ";
//    for(int i=0; i<k-1; i++)
//    {
//        if(flag+val<=cnt)
//        {
//            cout<<val<<" ";
//            flag+=val;
//        }
//        else
//            cout<<val-1;
//    }
    cout<<endl;

    return 0;
}
