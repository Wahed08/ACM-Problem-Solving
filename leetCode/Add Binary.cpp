class Solution {
public:
    string addBinary(string a, string b) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        string str = "";
        
        int k1 = a.size()-1;
        int k2 = b.size()-1;
        int sum = 0;
        
        while(k1 >= 0 || k2 >= 0 || sum == 1){
            sum += ((k1 >= 0)? a[k1] - '0' : 0);
            sum += ((k2 >= 0)? b[k2] - '0' : 0);
            str += (sum % 2 + '0');
            
            sum /= 2;
            k1--;
            k2--;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
