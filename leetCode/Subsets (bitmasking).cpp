class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec = {{}};
        
        int n = nums.size();
        int k = pow(2, n);
        vector<string>str;
        
        for(int i=1; i<k; i++){
            string s = "";
            int x = i;
            while(x != 0){
                s += x % 2 + '0';
                x /= 2;
            }
            for(int j=0; j<n; j++){
                if(s.length()<n)
                    s += '0';
            }
            reverse(s.begin(), s.end());
            str.push_back(s);
        }
        
        for(int i=0; i<str.size(); i++){
            string s = str[i];
            vector<int>v;
            for(int j=s.length()-1; j>=0; j--){
                if(s[j] == '1'){
                    v.push_back(nums[j]);
                }
            }
            vec.push_back(v);
        }
        
        return vec;
    }
};
