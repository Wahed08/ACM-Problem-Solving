class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        int cnt = 0;
        long k = x;
        while(x != 0){
            int rem = x % 10;
           if(cnt > INT_MAX/10 ||  (cnt == INT_MAX / 10 && cnt > 7)) return 0;
           if (cnt < INT_MIN/10 || (cnt == INT_MIN / 10 && cnt < -8)) return 0;
            cnt = cnt * 10 + rem;
            x /= 10; 
        }
        cout<<cnt<<endl;
        if(cnt == k)
            return true;
        return false;
    }
};
