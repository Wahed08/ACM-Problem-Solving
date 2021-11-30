class Solution {
public:
    
    int checkPal(int n, int& k){
        int temp = n;
        int number = n;
        int sum = 0, reminder;
        
        while(number != 0){
            reminder = number % 10;
            if(sum > INT_MAX/10 ||  (sum == INT_MAX / 10 && reminder > 7)) return 0;
            if(sum < INT_MIN/10 || (sum == INT_MIN / 10 && reminder < -8)) return 0;
            sum = sum*10 + reminder;
            number /= 10;
        }
        
        if(sum == temp){
            k = n;
        }
        // cout<<k<<" ";
        return k;
    }
    
    int sieve(int n, int& k){
        bool prime[n*n + 1];
        memset(prime, true, sizeof(prime));
        
        int x = n;

    for(int i=2; i*i <= n*n; i++){
        if(prime[i] == true){
            for(int p = i*i; p <= n*n; p += i){
                prime[p] = false;
            }
        }
    }
        int cnt = 0;
        for(int i=2; i<=n*n; i++){
        if(prime[i] && i>=n){
            cnt = checkPal(i, k);
            if(cnt>0)
                break;
        }
         
      }
        return k;
 }
    
    int primePalindrome(int n) {
        int k = 0;
        sieve(n, k);
        if(n == 1)
            return 2;
        return k;
    }
};
