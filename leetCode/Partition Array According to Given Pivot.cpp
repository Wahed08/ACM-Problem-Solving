class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec1, vec2;
        int n = nums.size();
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] < pivot)
                vec1.push_back(nums[i]);
            else if(nums[i] == pivot)
                count++;
        }
        
        for(int i=0; i<n; i++){
            if(nums[i] > pivot)
                vec2.push_back(nums[i]);
        }
        
        for(int i=0; i<count; i++){
            vec1.push_back(pivot);
        }
        vec1.insert(vec1.end(), vec2.begin(), vec2.end());
        
        return vec1;
    }
};
