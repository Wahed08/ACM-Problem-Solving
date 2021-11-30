#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i <= n; i++){
        if(prime[i] == true){
            for(int p = i*i; p <= n; p += i){
                prime[p] = false;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(prime[i])
            cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
   int n = 50;
   sieve(50);

   return 0;
}

// complexity O(nlog(log(n)))
