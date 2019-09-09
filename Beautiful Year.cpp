#include<iostream>
#include<string.h>
 
using namespace std;
int main()
{
    int y,b,c,d,a;
    cin>>y;
 
    while(true){
        y=y+1;
        a=y/1000;
        b=y/100%10;
        c=y/10%10;
        d=y%10;
 
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<<y<<endl;
 
    return 0;
}
 
