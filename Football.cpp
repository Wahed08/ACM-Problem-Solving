#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
 
    int n,sum=0,flag=0;
    cin>>n;
    string str,str2,str3;
 
    //cin>>str;
 
    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(i==0){
            sum++;
            str2=str;
        }
 
        if(str==str2)
        {
            str2=str;
            sum++;
        }
        else
        {
            flag++;
            str3=str;
        }
    }
    if(sum>flag)
        cout<<str2<<endl;
    else
        cout<<str3<<endl;
 
    return 0;
}
