class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        
        hc.insert(hc.begin(), 0), hc.push_back(h);
        vc.insert(vc.begin(), 0), vc.push_back(w);
        int cnt1=hc[0], cnt2=vc[0], mod = 1e9+7;
        
        for(int i=1; i<hc.size(); i++) cnt1 = max(cnt1, hc[i]-hc[i-1]);
        for(int i=1; i<vc.size(); i++) cnt2 = max(cnt2, vc[i]-vc[i-1]);
        
        return (long)cnt1*cnt2 % mod;
    }
};
