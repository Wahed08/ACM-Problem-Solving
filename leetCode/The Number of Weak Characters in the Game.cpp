class Solution {
    static bool sorting(vector<int>&a, vector<int>&b){
        if(a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }
public:    
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = p.size(), ans = 0, sum = 0;
        sort(p.begin(), p.end(), sorting);
        
        for(int i=0; i<n; i++){
            if(sum > p[i][1]){
                ans++;
            }else sum = p[i][1];
        }
        return ans;
    }
};
