
// using stringstrem word by word
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


//iterative solution character by character
class Solution {
public:
    string reverseWords(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie();
        
        int n = s.length();
        string word = "", answer = "";
        
        for(int i = n-1; i >= 0; i--){
            if(s[i] == ' ')
                continue;
            else{
                word += s[i];
                if(i > 0 and s[i-1] == ' '){
                    reverse(word.begin(), word.end());
                    answer += word + " ";
                    word = "";
                }else if(i == 0){
                    reverse(word.begin(), word.end());
                    answer += word;
                }
            }
        }
        int k = answer.length();
        if(answer[k-1] == ' ')
            answer.pop_back();
        
        return answer;
    }
};
