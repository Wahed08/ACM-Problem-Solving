class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        map<int, int>mapp;
        
        for(int i=0; i<n; i++) mapp[nums[i]]++;
        
        for(auto it : nums){
            if(mapp[it] == 0) continue;
            int freqVal = mapp[it], cur = it, flag = 0;
            
            while(mapp[cur] >= freqVal){
                freqVal = max(freqVal, mapp[cur]);
                mapp[cur]--;
                flag++;
                cur++;
            }
            if(flag < 3) return false;
        }
        return true;
    }
};
