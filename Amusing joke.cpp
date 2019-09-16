#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    string a,b,c;
 
    while (cin >> a >> b >> c)
    {
        a += b;
 
        sort (a.begin(),a.end());
        sort (b.begin(),b.end());
        sort (c.begin(),c.end());
 
        if (a == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}
