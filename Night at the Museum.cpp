#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[105];
    cin>>str;
    int sum=0,cnt,arr[105];
    int ln=strlen(str);
 
    int i=0;
    while(str[i]!='\0'){
        arr[i]=str[i];
        i++;
    }
    int flag=min(abs(97-arr[0]),26-abs(97-arr[0]));
 
    for(int i=1; i<ln; i++)
    {
        cnt=min(abs(arr[i]-arr[i-1]),26-abs(arr[i]-arr[i-1]));
        sum=sum+cnt;
    }
    cout<<sum+flag<<endl;
 
    return 0;
}
