class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int left=0,ans=INT_MIN,sum=0,x=0,ln=cardPoints.size();
        int n = ln - k;
        
        for(auto it : cardPoints) sum += it;
        if(ln == k) return sum;
        
        for(int i=0; i<ln; i++){
            x += cardPoints[i];
            cardPoints[i] = x;
        }
        
        for(int i=n-1; i<ln; i++){
            int val=0;
            if(i == n-1) val = cardPoints[i];
            else val = cardPoints[i] - cardPoints[left++];
            ans = max(ans, sum-val);
        }
        
        return ans;
    }
};
