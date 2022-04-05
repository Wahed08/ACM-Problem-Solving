class Solution {
public:
    int maxArea(vector<int>& height) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = height.size(), i=0, j=n-1;
        int sum = 0, k;
        
        while(i < j){
            k = (j-i) * min(height[i], height[j]);
            sum = max(sum, k);
            
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return sum;
    }
};
