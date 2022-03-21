class Solution {
public:
        map<int, string> one = {
             {2, "abc"},
             {3, "def"},
             {4, "ghi"},
             {5, "jkl"},
             {6, "mno"},
             {7, "pqrs"},
             {8, "tuv"},
             {9, "wxyz"}
        };
        vector<string> vec;
        
     void mapping(int i, string str, string& digits){
           if(str.length() == digits.length()){
               vec.push_back(str);
               return;
           }else{
               string curr = one[digits[i]-'0'];
               for(auto& x: curr){
                   mapping(i+1, str+x, digits);
               }
           }
       }
          
  vector<string> letterCombinations(string digits) {
         if(digits.length()){
             mapping(0, "", digits);
         }
             
        return vec;
  }
};
