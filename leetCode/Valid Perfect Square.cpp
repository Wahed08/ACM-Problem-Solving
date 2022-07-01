class Solution {
public:
    bool isPerfectSquare(int num) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        long start = 1, end = INT_MAX;
        while(start <= end){
            long long mid = start + (end-start)/2;
            if(mid*mid == num) return true;
            else if(mid*mid > num) end = mid-1;
            else start = mid+1;
        }
        return false;
    }
};
