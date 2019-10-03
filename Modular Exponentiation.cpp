#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,m,flag;
    cin>>n>>m;
 
    flag=pow(2,n);
 
    cout<<m%flag<<endl;
 
 return 0;
}
