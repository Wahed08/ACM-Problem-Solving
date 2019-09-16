#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int a,b,flag=0;
    cin>>a>>b;
 
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        flag++;
    }
 
    cout<<flag<<endl;
 
 return 0;
}
