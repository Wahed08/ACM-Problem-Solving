#include<iostream>
 
using namespace std;
int main()
{
    int n,Count=0,flag=0;
    char str[100005];
    cin>>n;
 
    cin>>str;
 
    for(int i=0; i<n; i++)
    {
        if(str[i]=='A')
        {
            Count++;
        }
        else if(str[i]=='D')
        {
            flag++;
        }
    }
    if(Count>flag)
        cout<<"Anton"<<endl;
    else if(flag>Count)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
 
    return 0;
}
