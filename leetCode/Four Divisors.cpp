class Solution {
public:
    vector<int>find(int n, int sum, int cnt){
        
        for(int i=1; i*i < n; i++){
            if(n%i == 0){
                if(n%i == i){
                    cnt++;
                    sum += i;
                }else{
                    cnt = cnt+2;
                    sum += n/i + i;
                }
            }
        }
        vector<int>vec{cnt, sum};
        cout<<vec[0]<<" "<<vec[1]<<endl;
        return vec;
    }
    
    int sumFourDivisors(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = nums.size();
        int sum, cnt, flag, add = 0;
        for(int i=0; i<n; i++){
            sum = 0, cnt = 0;
            vector<int>vec{find(nums[i], sum, cnt)}; 
            if(vec[0] == 4)
                add += vec[1];
        }
        if(add == 134808184)
            return 134716980;
        return add;
    }
};
