class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = tasks.size();
        map<int, int>mapp;
        
        int val = 0;
        for(int i=0; i<n; i++) mapp[tasks[i]]++;
        
        for(auto it : mapp){
            int secondVal = it.second;
            
            if(secondVal==1) return -1;
            if(secondVal==2) val++;
            if(secondVal==3) val++;
            if(secondVal>3){
                int res = secondVal/3;
                int y = secondVal - 3*res;
                
                if(y==0) val+=res;
                if(y==1) val+=(res-1+2);
                if(y==2) val+=res+1;
            }
        }
        return val;
    }
};
