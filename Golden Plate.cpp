#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int sum,flag=0;
    sum=2*(n+m)-4;
    int x=4,y=4;
    for(int i=1; i<k; i++){

        flag+=2*(n-x+m-y)-4;
        x=x+4,y=y+4;
    }
    cout<<sum+flag<<endl;

 return 0;
}
