class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                break;
            }else if(numbers[i] + numbers[j] < target)
                i++;
            else
                j--;
        }
        return {i+1,j+1};
    }
};
