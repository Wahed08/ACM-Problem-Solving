class Solution {
public:
    string multiply(string num1, string num2) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int n = num1.length();
        int m = num2.length();
        int Size = m + n;
        string str="";
        int flag = 0;
        vector<int>vec(Size, 0);
        
        if(num1 == "0" || num2 == "0")
            return "0";
        
        
        for(int i = n-1; i>=0; i--){
            for(int j = m-1; j>=0; j--){
                int val = (num1[i]-'0') * (num2[j]-'0');
                val += vec[i+j+1];
                vec[i+j+1] = val % 10;
                vec[i+j] += val / 10;
                
            }
        }
        
        for(int i=0; i<Size; i++)
            str += to_string(vec[i]);
        
        if(str[0] == '0')
            str.erase(str.begin());
        
        return str;
    }
};
