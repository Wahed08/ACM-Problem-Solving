class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = ops.size(), sum=0;
        vector<int>vec;
        
        for(int i=0; i<n; i++){
            if(isdigit(ops[i][ops[i].size()-1])){
                vec.push_back(stoi(ops[i]));
                continue;
            }
            
            if(ops[i] == "+"){
                int x = vec.back();
                vec.pop_back();
                int y = vec.back();
                vec.push_back(x), vec.push_back(x+y);
            }
            
            if(ops[i] == "C")
                vec.pop_back();
            if(ops[i] == "D"){
                vec.push_back(vec.back()*2);
            }
        }
        for(auto it:vec) cout<<it<<" ";
        for(auto it:vec) sum += it;
        
        
        return sum;
    }
};
