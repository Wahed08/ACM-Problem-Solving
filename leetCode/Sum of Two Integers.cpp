class Solution {
public:
    int getSum(int a, int b) {
        
        //half adder concept
        int sum, carry;
        
        while(b != 0){
            sum = a^b;
            carry = ((unsigned int)(a&b))<<1;
            a = sum;
            b = carry;
        }
        
        return a;
    }
};
