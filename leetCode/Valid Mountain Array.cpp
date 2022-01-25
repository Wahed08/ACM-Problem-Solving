class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        
        int cnt = 0;
        if(arr.size() >= 3){
            if(is_sorted(arr.begin(), arr.end(),greater<int>()))
                return false;
            
            for(int i=1; i<arr.size(); i++){
                if(arr[i] < arr[i-1]){
                    cnt = i-1;
                    break;
                }
            } 
            cout<<cnt;
            int flag1 = 0, flag2 = 0;
            for(int j=1; j<=cnt; j++){
                if(arr[j] > arr[j-1]){
                    flag1++;
                }
            }

            for(int x = cnt+1; x<arr.size(); x++){
                if(arr[x] < arr[x-1]){
                    flag2++;
                }
            }
            if(flag1 == cnt && flag2 == arr.size()-cnt-1)
                return true;
        }
        return false;
    }
};
