#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,p=0,j;
    char s[1000],S1[1000],a[2];
    gets(s);
   
    gets(S1);
    for(i=0,j=strlen(s)-1;i<strlen(S1),j>=0;i++,j--)
    {
        if(s[j] == S1[i])
        p++;
    }
 
    if ( p == strlen(s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
