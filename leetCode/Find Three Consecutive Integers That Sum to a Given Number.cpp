class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        long long val = num/3;
        
        if(val*3 == num)
            return {val-1, val, val+1};
        
        return {};
    }
};
