bool compareInterval(vector<int>&vec1, vector<int>&vec2){
    return (vec1[0] < vec2[0]) ? true : false;
}

class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        vector<vector<int>>vec;
        if(intervals.size() == 1)
            return intervals;

        int n = intervals.size();
        
        sort(intervals.begin(), intervals.end(), compareInterval);
        int x1 = intervals[0][0];
        int x2 = intervals[0][1];
        
        for(int i=1; i<n; i++){
            if(intervals[i][0] > x2){
                vector<int>sg = {x1,x2};
                vec.push_back(sg);
                x1 = intervals[i][0];
                x2 = intervals[i][1];
            }
            else if(intervals[i][0] >= x1 and intervals[i][1] <= x2){
                x1 = x1;
                x2 = x2;
            }
            else if(intervals[i][0] <= x2 and intervals[i][1] >= x1){
                x1 = x1;
                x2 = intervals[i][1];
            }
        }
        vector<int>sg = {x1,x2};
        vec.push_back(sg);
        
        return vec;
    }
};
