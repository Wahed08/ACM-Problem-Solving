class Solution {
public:
    void backtrack(int idx, vector<int>&v, string str,int n, int k){
        
        if(str[0] == '0') return;
        if(str.length() >= 2 and abs(str[0]-str[1]) != k) return;
        if(str.length() >= 3 and abs(str[1]-str[2]) != k) return;
        if(str.length() >= 4 and abs(str[2]-str[3]) != k) return;
        if(str.length() >= 5 and abs(str[3]-str[4]) != k) return;
        if(str.length() >= 6 and abs(str[4]-str[5]) != k) return;
        if(str.length() >= 7 and abs(str[5]-str[6]) != k) return;
        if(str.length() >= 8 and abs(str[6]-str[7]) != k) return;
        
        if(str.length() == n){
            for(int x=0; x<str.length()-1; x++){
                if(abs(str[x] - str[x+1]) == k) continue;
                else return;
            }
            v.push_back(stoi(str));
            return;
        }
        
        for(int i=0; i<=9; i++){
            str += to_string(i);
            backtrack(i+1, v, str, n, k);
            str.pop_back();
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>v, ans;
        string s = "";
        backtrack(1, v, s, n, k);
        
        return v;
    }
};
