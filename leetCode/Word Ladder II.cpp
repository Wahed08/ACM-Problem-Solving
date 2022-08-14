// got TLE(32/35)

class Solution {
public:
    vector<vector<string>>ans;
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        set<string>mp(wordList.begin(), wordList.end());
        if(mp.find(endWord) == mp.end()) return {};
        
        queue<vector<string>>q;
        bool flag = false;
        q.push({beginWord});
        
        while(!q.empty()){
            int ln = q.size();
            while(ln--){
                vector<string> str = q.front();
                q.pop();
                
                string temp = str.back();
                
                if(temp == endWord){
                    ans.push_back(str);
                    flag = true;
                    continue;
                }
                
                mp.erase(temp);
                for(int i=0; i<temp.length(); i++){
                    char x = temp[i];
                    for(char ch = 'a'; ch <= 'z'; ch++){
                        temp[i] = ch;
                        
                        if(mp.find(temp) != mp.end()){
                            str.push_back(temp);
                            q.push(str);
                            str.pop_back();
                        }
                    }
                    temp[i] = x;
                }
            }
            if(flag) break;
        }
        return ans;
    }
};
