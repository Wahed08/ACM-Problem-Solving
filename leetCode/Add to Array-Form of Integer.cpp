class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       long long int val = 0;
        
        for (int i = num.size()-1; i >= 0; i--){
            
            int val = num[i] + k;
            k = val / 10;
            val = val % 10;
            num[i] = val;
        }
        
        while(k != 0){
            num.insert(num.begin(), k%10);
            k=k/10;
        }
        return num;
    }
};
