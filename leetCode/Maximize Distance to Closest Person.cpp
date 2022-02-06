class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = seats.size();
        int value=1, cnt=1, k;
        int value1=1, cnt1=1, k1;
        
        for(int i=1; i<n; i++){
            if(seats[i-1] == 0 && seats[i-1] == seats[i]){
                cnt++;
            }else{
                if(value <= cnt)
                    k = i-1;
                value = max(cnt, value);
                cnt = 1;
            }
        }

       if(cnt >= value)
            return cnt;
        
        // reverse check for beginning the maximum value
        for(int i=n-1; i>0; i--){
            if(seats[i-1] == 0 && seats[i-1] == seats[i]){
                cnt1++;
            }else{
                if(value1 <= cnt1)
                    k1 = i-1;
                value1 = max(cnt1, value1);
                cnt1 = 1;
            }
        }
        
         if(cnt1 >= value1)
            return cnt1;
        
         if(cnt > (value+1)/2)
            return cnt;
        
         if(cnt1 > (value1+1)/2)
            return cnt1;
        
        return (value+1)/2;
    }
};
