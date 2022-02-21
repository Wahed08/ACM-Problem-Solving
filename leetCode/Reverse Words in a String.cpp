class Solution {
public:
    string reverseWords(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie();
        
        int n = s.length();
        string word = "", answer = "";
        stringstream str(s), val(s);
        int ln = 0;
        
        while(str >> word){
           ln++;
        }
        while(val >> word){
            reverse(word.begin(), word.end());
            answer += word; 
            
            ln--;
            if(ln != 0)
                answer += " ";
        }
        reverse(answer.begin(), answer.end());
        
        return answer;
    }
};
