class Solution {
public:
    int minPartitions(string n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int cnt=0;
        for(int i=0; i<n.length(); i++) cnt = max(cnt, (n[i]-'0'));

        return cnt;
    }
};
