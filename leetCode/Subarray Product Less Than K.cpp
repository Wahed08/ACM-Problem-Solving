// this solution got TLE

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int count = 0, sum = 0;
        int mul = 1, i=0, j=0;
        
        while(j < n){
            if(i < n and nums[i]*mul < k){
                count++;
                mul *= nums[i];
                if(i < n)
                    i++;
                else if(i == n-1){
                    if(j < n){
                        j++;
                        i = j;
                        mul = 1;
                        sum += count;
                        count = 0;
                    }
                }
            }else{
                j++;
                i = j;
                sum += count;
                count = 0;
                mul = 1;
            }
        }
        
        return sum;
    }
};


// sliding window solution
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int count = 0;
        int mul = 1, j=0;
        
        if(k <= 1)
            return 0;
        
        for(int i=0; i<n; i++){
            mul *= nums[i];
            while(mul >= k)
                mul /= nums[j++];
            
            count += i-j+1;
        }
        
        return count;
    }
};
