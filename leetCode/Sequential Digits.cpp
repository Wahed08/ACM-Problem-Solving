class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        queue<int>q;
        vector<int>vec;
        
        for(int i=1; i<=9; i++)
            q.push(i);
        
        while(!q.empty()){
            int num = q.front();
            q.pop();
            if(num >= low && num <= high)
                vec.push_back(num);
            
            int rem = num % 10;
            int next = num*10 + rem + 1;
            if(rem < 9 && next <= high)
                q.push(next);
        }
        return vec;
    }
};
