class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        int n = tops.size(), ans = INT_MAX;
        vector<int> top(7,0),bottom(7,0),equal(7,0);
        
        for( int i = 0; i < n; i++){
            top[tops[i]]++;
            bottom[bottoms[i]]++;
            if( tops[i] == bottoms[i] )
                equal[tops[i]]++;
        }
        
        for( int i = 1; i <=6; i++){
            if(top[i]+bottom[i]-equal[i] == n )
                ans = min(ans, min(top[i],bottom[i]) - equal[i]);
        }
        
        return ans == INT_MAX ? -1:ans;
    }
};
