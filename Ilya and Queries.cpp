#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[100001];
    int arr[100001],m,l,r;
 
    cin>>str>>m;
    int ln=strlen(str);
 
    arr[1]=0;
    for(int i=1; i<ln; i++)
    {
        if(str[i]==str[i-1])
        {
            arr[i+1]=arr[i]+1;
        }
        else
            arr[i+1]=arr[i];
    }
    while(m--)
    {
        cin>>l>>r;
        cout<<arr[r]-arr[l]<<endl;
    }
 
    return 0;
}
