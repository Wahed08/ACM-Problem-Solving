#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b,sum=1,cnt=1;
    cin>>n;
    cin>>a>>b;
 
    while(--n){
        int c,d;
        cin>>c>>d;
        if(a==c & b==d){
            sum++;
            if(sum>cnt){
                cnt=sum;
            }
        }else
        {
            sum=1;
        }
        a=c;
        b=d;
    }
    cout<<cnt<<endl;
 
 return 0;
}
