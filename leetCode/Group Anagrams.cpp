class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
       
        int n = strs.size();
        vector<vector<int>>mp(n, vector<int>(26,0));
        vector<string>one;
        vector<string>str;
        vector<vector<string>>two;
        multimap<vector<int>, string >mapp;
        vector<vector<int>>vec;
        int flag = 0;
        
        for(int i=0; i<n; i++){
            string s = strs[i];
            for(int j=0; j<s.length(); j++){
                mp[i][s[j]-'a']++;
            }
        }
        
        for(int i=0; i<n; i++){
            mapp.insert({mp[i], strs[i]});
        }
     
        for(auto it = mapp.begin(); it!= mapp.end(); it++){
           vector<int>v = it->first;
            vec.push_back(v);
            str.push_back(it->second);
        }
       
        for(int i=0; i<vec.size()-1; i++){
            vector<int>v = vec[i];
            if(v == vec[i+1]){
                one.push_back(str[i]);
                flag = 0;
            }else{
                flag = 1;
                one.push_back(str[i]);
                two.push_back(one);
                one.clear();
            }
        }
        
        if(flag == 1){
            one.push_back(str[n-1]);
            two.push_back(one);
        }
        if(flag == 0){
            one.push_back(str[n-1]);
            two.push_back(one);
        }
            
        return two;
    }
};



///// easy approach
 unordered_map<string, vector<string>>mp;
        vector<vector<string>>vec;
        
        for(int i=0; i<n; i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(strs[i]);
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            vec.push_back(it->second);
        }
        return vec;
