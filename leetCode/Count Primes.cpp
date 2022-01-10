class Solution {
public:
    int sieve(int n){
        bool prime[n+1];
        memset(prime, true, sizeof(prime));
        int count = 0;

        for(int i=2; i*i <= n; i++){
            if(prime[i] == true){
                for(int p = i*i; p <= n; p += i){
                    prime[p] = false;
                }
            }
        }
        for(int i = 2; i < n; i++){
            if(prime[i])
                count++;
        }
        return count;
    }
    
    int countPrimes(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        // if(n<=2)
        //     return 0;
        
        return sieve(n);
    }
};
