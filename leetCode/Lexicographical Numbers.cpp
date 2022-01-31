class Solution {
public:
    vector<int> lexicalOrder(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec;
        int number = 1;
        
       for(int i=0; i<n; i++){
           vec.push_back(number);
           if(number * 10 <= n){
               number *= 10;
           }else{
               if(number == n)
                   number /= 10;
               number += 1;
               while(number % 10 == 0)
                   number /= 10;
           }
       }
        return vec;
    }
};
