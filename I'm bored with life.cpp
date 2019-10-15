#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int fact=1,i,m,n;
    cin>>m>>n;
 
    for(i=1; i<=min(m,n); i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
 
 return 0;
}
