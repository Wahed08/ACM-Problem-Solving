class Solution {
public:
    
    bool checkPal(int n){
        int temp = n;
        int number = n;
        int sum = 0, reminder;
        
        while(number != 0){
            reminder = number % 10;
            sum = sum*10 + reminder;
            number /= 10;
        }
        
        if(sum == temp){
            return true;
        }
        return false;
    }
    
//     int sieve(int n, int& k){
//         bool prime[10000001 + 1];
//         memset(prime, true, sizeof(prime));
        

//     for(int i=2; i <= sqrt(n); i++){
//         if(prime[i] == true){
//             for(int p = i*i; p < 10000000; p += i){
//                 prime[p] = false;
//             }
//         }
//     }
//         int cnt = 0;
//         for(int i=n; i < 10000000; i++){
//         if(prime[i]){
//             cnt = checkPal(i, k);
//             if(cnt>0)
//                 break;
//         }
         
//       }
       
//          return k;
//  }
    
     bool checkPrime(int n) {   
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
    
    int primePalindrome(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
//         int k = 0;
//         sieve(n, k);
//         if(n == 1)
//             return 2;
//         return k;
        
        for(int i=n;i<10000000;i++){
            if(checkPrime(i) && checkPal(i)){
                return i;
            }
        }
        return 100030001;
    }
};
