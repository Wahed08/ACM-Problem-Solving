bool sorting(vector<int>&vec1, vector<int>&vec2){
        int x = vec1[0]*vec1[0] + vec1[1]*vec1[1];
        int y = vec2[0]*vec2[0] + vec2[1]*vec2[1];
        
        return x<y;
}
    

class Solution {
public:
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        sort(points.begin(), points.end(), sorting);  
        vector<vector<int>> vec;
        for(int i=0; i<k; i++){
            vec.push_back(points[i]);
        }
        
        return vec;
    }
};
