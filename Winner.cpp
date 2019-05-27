#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n, m;
    vector<string> str;
    vector<int> vec;
    map<string, int> mp, val;
    scanf("%d", &n);
    for(int i=0; i<n; ++i)
    {
        char st[40];
        int x;
        scanf("%s%d", st, &x);
        str.push_back(st);
        vec.push_back(x);
        mp[st] += x;
    }
    m = -1;
    for(map<string, int>::iterator it=mp.begin(); it!=mp.end(); ++it)
        m = max(m, it->second);
    mp.clear();
    for(int i=0; i<n; ++i)
    {
        mp[str[i]] += vec[i];
        if(mp[str[i]] >= m && val.find(str[i]) == val.end())
            val[str[i]] = i;
    }
    string str2;
    int k = n;
    for(map<string, int>::iterator it=val.begin(); it!=val.end(); ++it)
        if(mp[it->first]==m && k>it->second)
            k=it->second, str2=it->first;
    puts(str2.c_str());
    return 0;
}
