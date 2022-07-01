class Solution {
    static bool compare(vector<int>&a, vector<int>&b){
        if(a[1] == b[1]) return a[0] > b[0];
        return a[1] > b[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = boxTypes.size(), cnt = 0;
        sort(boxTypes.begin(), boxTypes.end(), compare);
        
        for(auto it : boxTypes){
            if(it[0] <= truckSize){
                cnt += it[0]*it[1];
                truckSize -= it[0];
            }else if(truckSize != 0 and it[0] - truckSize > 0){
                cnt += truckSize * it[1];
                truckSize -= truckSize;
            }
        }
        return cnt;
    }
};
