class Solution {
public:
    int getKth(int lo, int hi, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<pair<int, int>, int>mp;
        int y;
        int flag = 0;
        
        for(int i = lo; i <= hi; i++){
            int cnt = 0, x = i;
            int value = i;
            while(x != 1){
                cnt++;
                if(x % 2 == 0)
                    x /= 2;
                else
                    x = (3 * x) + 1;
            }
            mp[{cnt, value}];
        }
        
        for(auto it = mp.begin(); it!= mp.end(); it++){
          
           flag++;
           if(flag != k){
              continue;
           }
           y = it->first.second;
           break;
        }
        
        return y;
    }
};
