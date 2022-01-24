class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        int j = 0;
        for(int i=0; i<word.length(); i++){
            if(word[i] >= 'A' and word[i] <= 'Z'){
                cnt++;
                j = i;
                if(cnt == word.length())
                    return true;
            }
        }
        if(cnt == 0)
            return true;
        if(cnt == 1 && j == 0)
            return true;
        return false;
    }
};
