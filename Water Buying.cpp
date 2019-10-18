#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  long long l, baki, t, n, a, b, i;
  
  long long x = 0, y = 0;
  
  cin >> t;
  
  for (i = 0; i < t; i++) {
    {
      x = 0, y = 0;
      
      cin >> n >> a >> b;
      
 
      if (n % 2 == 0) {
          
        x = (n * b) / 2;
        
        y = (n * a);
        
        cout << min(x, y)<<endl;
        
      } else {
          
          
        x = ((n - 1) * b) / 2 + a;
        
        y = n * a;
        
        cout << min(x, y)<<endl;
        
      }
    }
  }
  return 0;
}
