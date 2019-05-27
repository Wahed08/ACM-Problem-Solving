#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s1[5],s2[5];
    cin>>s1>>s2;

       int x=s2[0]-s1[0];//LR
    int y=s2[1]-s1[1];//UD
    cout<<max(abs(x),abs(y))<<endl;
    while(x||y)
    {
        if(x>0)
            x--,cout<<"R";
        if(x<0)
            x++,cout<<"L";
        if(y>0)
            y--,cout<<"U";
        if(y<0)
            y++,cout<<"D";
        cout<<endl;

    }
    return 0;
}
