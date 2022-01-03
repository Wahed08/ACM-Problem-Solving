class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<int, int>one;
        map<int, int>two;
        int ln = trust.size();
        
        for(int i=0; i<ln; i++){
            one[trust[i][0]]++;
            two[trust[i][1]]++;
        }
        
        for(int i=1; i<=n; i++){
            if(one[i] == 0 && two[i] == n-1)
                return i;
        }
        return -1;
    }
};
