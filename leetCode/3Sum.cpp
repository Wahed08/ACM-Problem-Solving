class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>>s;
        vector<vector<int>>vec;
        
        for(int i = 0; i < n; i++){
            
            int k = i+1, j = n-1;
            
            while(k < j){
                if(nums[i] + nums[k] + nums[j] == 0){
                    
                    vector<int>v = {nums[i], nums[k], nums[j]};
                    sort(v.begin(), v.end());
                    s.insert(v);
                    int x = k, y = j;
                    while(k < n && nums[x] == nums[k])
                        k++;
                    while(k<j && nums[y] == nums[j])
                        j--;
                    
                }else if(nums[i] + nums[k] + nums[j] < 0)
                    k++;
                 else
                    j--;
            }
        }
        for(auto it = s.begin(); it != s.end(); it++){
            vec.push_back(*it);
        }
        return vec;
    }
};
