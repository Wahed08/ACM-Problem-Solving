class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        map<string, int>mp;
        for(int i=0; i<wordList.size(); i++){
            mp[wordList[i]]++;
        }
        
        if(mp.find(endWord) == mp.end())
            return 0;
        
        int words = 1;
        queue<string>q;
        q.push(beginWord);
        
        while(!q.empty()){
           int length = q.size();
            
            while(length--){
                string str = q.front();
                q.pop();
            
                if(str == endWord)
                    return words;
                
                for(int i=0; i<str.length(); i++){
                    char x = str[i];
                    
                    for(char ch = 'a'; ch <= 'z'; ch++){
                        str[i] = ch;
                        
                        if(mp.find(str) != mp.end()){
                            q.push(str);
                            mp.erase(str);
                        }
                    }
                    str[i] = x;
                }
            }
            words++;
        }
        
        return 0;
    }
};





