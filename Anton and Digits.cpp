#include <iostream>
 
using namespace std;
typedef long long LL;
 
int main(void)
{
    LL k1, k2, k3, k4;
 
    cin>>k1>>k2>>k3>>k4;
 
    LL  mn= min(k1, min(k3, k4));
 
    k1-= mn;
 
    cout<< 256*mn + 32*min(k1, k2) <<endl;
 
    return 0;
}
