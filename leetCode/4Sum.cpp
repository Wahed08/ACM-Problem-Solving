class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>>vec;
        set<vector<int>>s;
        
        for(int i=0; i<n-3; i++){
            for(int j = i+1; j<n-2; j++){
                
                int answer = target - (nums[i] + nums[j]);
                int low = j+1, high = n-1;
                
                while(low < high){
                    if(nums[low] + nums[high] == answer){
                        vector<int>v = {nums[i], nums[j], nums[low], nums[high]};
                        s.insert(v);
                        
                        int value1 = low, value2 = high;
                        while(low < high && nums[value1] == nums[low])
                            low++;
                        while(low < high && nums[value2] == nums[high])
                            high--;
                        
                    }else if(nums[low] + nums[high] < answer)
                        low++;
                    else
                        high--;
                }
            }
        }
        for(auto it = s.begin(); it != s.end(); it++)
            vec.push_back(*it);
        
        return vec;
    }
};
