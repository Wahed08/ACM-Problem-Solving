class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(arr2.begin(), arr2.end());
        int sum = 0;
        
        for(int i=0; i<arr1.size(); i++){
            int start = 0, end = arr2.size()-1, cnt = INT_MAX;
            while(start <= end){
                int mid = start + (end-start)/2;
                if(arr2[mid] == arr1[i]){
                    cnt = 0;
                    break;
                }
                else if(arr2[mid] < arr1[i]){
                    cnt = min(cnt, abs(arr1[i] - arr2[mid]));
                    start = mid + 1;
                }else{
                    cnt = min(cnt, abs(arr1[i] - arr2[mid]));
                    end = mid - 1;
                }
            }
            if(cnt > d) sum++;
        }
        return sum;
    }
};
