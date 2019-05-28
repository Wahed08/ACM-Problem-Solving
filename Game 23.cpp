#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int n,m,sum,k;
    cin>>n>>m ;

    if(n==m)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(n*2>m && n*3>m)
    {
        cout<<-1<<endl;
        return 0;
    }
    //k=m/n;
    else{
            if(m%n==0){
        k=m/n;
        sum=0;
        while(k%2==0){
            sum++;
            k=k/2;
        }
        while(k%3==0){
            sum++;
            k=k/3;
        }
            }
        if(k!=1){
        cout<<-1<<endl;
        return 0;
        }
    }
    cout<<sum<<endl;

   
