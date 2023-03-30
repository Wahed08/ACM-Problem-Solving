class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);

        int n = sat.size(), ans = 0;
        sort(sat.begin(), sat.end());

        for(int i=0; i<n; i++){
            int value = 0, k=1;
            for(int j=i; j<n; j++){
                value += sat[j] * k++;
            }
            ans = max(value, ans);
        }
        return ans;
    }
};
