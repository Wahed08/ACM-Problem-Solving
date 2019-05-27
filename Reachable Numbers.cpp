#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long num;
    cin >> num;
    set<long> str;
    str.insert(num);

    num++;
    while(num/10!=0)
    {
        while(num%10 == 0){
            num=num/10;
        }
        str.insert(num);
        num++;
    }
    for(int i=1; i<10; i++) str.insert(i);
    cout << str.size() << endl;
}
