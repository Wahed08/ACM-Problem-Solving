//this got TLE 85/87

bool compare(vector<int>&a, vector<int>&b){
    return a[0] < b[0];
}

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = envelopes.size();
        sort(envelopes.begin(), envelopes.end(), compare);
        vector<int>vec(n,1);
        
        for(int i=1; i<n; i++){
           for(int j=0; j<i; j++){
               if(envelopes[i][0] > envelopes[j][0] and envelopes[i][1] > envelopes[j][1] and vec[i] < vec[j]+1){
                   vec[i] = vec[j]+1;
               }
           }
        }
        sort(vec.begin(), vec.end());
        return vec[n-1];
    }
};

// optimized Solution
class Solution {
public:
    static bool compare(vector<int>&a, vector<int>&b){
        return a[0] == b[0] ? a[1] > b[1] : b[0] > a[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = envelopes.size(), cnt = 0;
        sort(envelopes.begin(), envelopes.end(), compare);
        vector<int>vec;
 
        for(auto it : envelopes){
            int x = it[1];
            int val = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
            
            if(val == vec.size()){
                vec.push_back(x);
                cnt++;
            }
            else
                vec[val] = x;
        }
        return cnt;
    }
};
