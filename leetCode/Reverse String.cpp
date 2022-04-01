class Solution {
public:
    void reverseString(vector<char>& s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = s.size();
        
        for(int i=0, j=n-1; i<n/2; i++, j--){
            swap(s[i], s[j]);
        }
    }
};
