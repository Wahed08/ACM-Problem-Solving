#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n,sum=0;
    char a[1001],b[1001];
    cin>>n;
    cin>>a>>b;
 
    for(int i=0; i<n; i++){
        sum+=min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
    }
    cout<<sum<<endl;
 
    return 0;
}
