class Solution {
public:
    int bitwiseComplement(int n) {
         ios_base::sync_with_stdio(false);
         cin.tie(0), cout.tie(0);
        
         vector<int>vec;
         string str = "";
        
        if(n == 0)
            return 1;
        
          while (n > 0) {
              if(n%2 == 0)
                vec.push_back(1);
              else
                vec.push_back(0);
          n /= 2;
       }
        reverse(vec.begin(), vec.end());
        
        int res = 0;
        for(int i=0; i<vec.size(); i++){
            res = res*2 + vec[i];
        }
        
        return res;
    }
};
