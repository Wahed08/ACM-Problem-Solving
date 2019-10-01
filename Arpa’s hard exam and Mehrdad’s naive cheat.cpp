#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
 
    if(n==0)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else if(n%4==0)
        cout<<"6"<<endl;
    else if(n%4==1)
        cout<<"8"<<endl;
    else if(n%4==2)
        cout<<"4"<<endl;
    else if(n%4==3)
        cout<<"2"<<endl;
 
    return 0;
}
