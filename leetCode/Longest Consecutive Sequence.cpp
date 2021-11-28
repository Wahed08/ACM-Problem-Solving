class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int answer = 0, cnt = 0; 
        sort(nums.begin(), nums.end());
        
        vector<long>vec;
        vec.push_back(nums[0]);
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1])
                vec.push_back(nums[i]);
        }
        
        for(int i=0; i<vec.size(); i++){
            if(i>0 && vec[i] == vec[i-1]+1)
                cnt++;
            else
                cnt = 1;
            
            answer = max(answer, cnt);
        }
        return answer;
    }
};
