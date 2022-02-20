bool compareInterval(vector<int>&vec1, vector<int>&vec2){
     return (vec1[0] < vec2[0]) ? true : false;
}

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), compareInterval);
        int cnt = 1;
        
        int one = intervals[0][0];
        int two = intervals[0][1];
        
        for(int i=1; i<n; i++){
           if(intervals[i][0] > one and intervals[i][1] > two)
               cnt++;
            
            if(intervals[i][1] > two){
                one = intervals[i][0];
                two = intervals[i][1];
            }
        }
    
        return cnt;
    }
};
