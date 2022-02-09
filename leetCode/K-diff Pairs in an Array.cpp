class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        map<int, int>mp;
        set<int>st;
        int cnt = 0;
        
        if(k == 0){
            for(int i=0; i<n; i++){
                mp[nums[i]]++;
            }
        }
         for(auto it=mp.begin(); it != mp.end(); it++){
             if(it->second >= 2)
                 cnt++;
         }
        if(k == 0)
            return cnt;
        
        mp.clear();
        cnt = 0;
        
        for(int i=0; i<n; i++)
            st.insert(nums[i]);
        
        for(int i=0; i<n; i++)
            mp[k+nums[i]]++;
        
        for(auto it = st.begin(); it != st.end(); it++){
            if(mp.find(*it) != mp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};

  
