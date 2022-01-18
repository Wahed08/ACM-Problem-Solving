class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int length = flowerbed.size();
        
        for(int i=0; i<length; i++){
            if(n == 0)
                break;
            if(flowerbed[i] == 0){
                if((i == 0 || flowerbed[i-1] == 0) && (i == length - 1 || flowerbed[i+1] == 0)){
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }

        if(n == 0)
            return true;
        return false;
    }
};
