class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int> a(26,0);
        int len=s1.size();

        for(int i=0; i<s1.size(); i++){
            a[s1[i]-'a']++;
        }
        vector<int> b(26,0);
        for(int i=0,j=0; i<s2.size(); i++){
            b[s2[i]-'a']++;    
            if(i+1>=s1.size()){
                if(a==b)
                    return true;
                else{
                    b[s2[j++]-'a']--;
                }
            }
        }
        return false;
    }
};

