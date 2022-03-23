class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int count = 0;
        
        while(target > startValue){
            count++;
            if(target % 2 == 0)
                target >>= 1;
            else
                target++;
        }
        
        return count + startValue-target;
    }
};
