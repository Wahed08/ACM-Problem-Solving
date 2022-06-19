class Solution {
public:
    map<string, vector<string>>mapp;
    void mapping(vector<string>& products){
        for(int i=0; i<products.size(); i++){
            
            string word = products[i];
            int sz = word.length();
            
            for(int j=1; j<=sz; j++){
                string prefix = word.substr(0, j);
                mapp[prefix].push_back(word);
            }
        }
    }
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(products.begin(), products.end());
        mapping(products);
        
        int ln = searchWord.length();
        vector<vector<string>>vec;
        
        for(int i=1; i<=ln; i++){
            string searchPre = searchWord.substr(0, i);
            if(mapp.find(searchPre) != mapp.end()){
                vector<string>v = mapp[searchPre];
                if(v.size() > 3){
                    v.erase(v.begin()+3, v.end());
                }
                vec.push_back(v);
            }else
                vec.push_back({});
        }
        
        return vec;
    }
};
