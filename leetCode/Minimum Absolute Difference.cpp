class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<int>v1;
        vector<vector<int>>vec;
        
        sort(arr.begin(), arr.end());
        
        int k = INT_MAX;
        
      for(int i=1; i<n; i++){
          if(arr[i] - arr[i-1] < k){
              k = arr[i] - arr[i-1];
          }
      }
        
        for(int i=1; i<n; i++){
            if(arr[i] - arr[i-1] == k){
                v1.push_back(arr[i-1]);
                v1.push_back(arr[i]);
                vec.push_back(v1);
                v1.clear();
            }
        }
        
        return vec;
    }
};
