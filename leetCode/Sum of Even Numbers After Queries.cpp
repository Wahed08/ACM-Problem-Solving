class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int sum = 0;
        vector<int>ans;
        for(auto it : nums) sum += it % 2 == 0? it : 0;
       
        for(auto it : queries){
            vector<int>v{it};
            if((nums[v[1]] % 2) == 0){
                sum -= nums[v[1]];
                if(((nums[v[1]] + v[0]) % 2) == 0){
                    sum += nums[v[1]] + v[0];
                    ans.push_back(sum);
                }else ans.push_back(sum);
                nums[v[1]] = nums[v[1]] + v[0];
    
            }else{
                if((nums[v[1]] + v[0]) % 2 == 0){
                    sum += nums[v[1]] + v[0];
                    ans.push_back(sum);
                }else ans.push_back(sum);
                nums[v[1]] = nums[v[1]] + v[0];
            }
        }
        return ans;
    }
};
