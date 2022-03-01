// O(nlogn) solution

class Solution {
public:
    vector<int> countBits(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec = {0};
        
        for(int i=1; i<=n; i++){
            int x = i, count = 0;
            while(x != 0){
                if(x % 2 == 1)
                    count++;
                x /= 2;
            }
            vec.push_back(count);
        }
        
        return vec;
    }
};

// O(n) solution--using DP

class Solution {
public:
    vector<int> countBits(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<int>vec(n+1, 0);
        
        for(int i=1; i<=n; i++){
            vec[i] = vec[i/2] + i % 2; 
        }
        
        return vec;
    }
};
