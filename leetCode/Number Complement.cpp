class Solution {
public:
    int findComplement(int num) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
         vector<int>vec;
         string str = "";
        
          while (num > 0) {
          vec.push_back(num % 2);
          num /= 2;
       }
        reverse(vec.begin(), vec.end());
        
        for(int i=0; i<vec.size(); i++){
           if(vec[i] == 0)
               vec[i] = 1;
            else vec[i] = 0;
        }
        
        int res = 0;
        for(int i=0; i<vec.size(); i++){
            res = res*2 + vec[i];
        }
        
        return res;
    }
};
