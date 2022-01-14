class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        double a1, a2, a3, a4, d1, d2;
        a1 = (pow(p1[0] - p2[0],2) + pow(p1[1] - p2[1],2));
        a2 = (pow(p2[0] - p3[0],2) + pow(p2[1] - p3[1],2));
        a3 = (pow(p3[0] - p4[0],2) + pow(p3[1] - p4[1],2));
        a4 = (pow(p1[0] - p4[0],2) + pow(p1[1] - p4[1],2));
        
        d1 = (pow(p1[0] - p3[0],2) + pow(p1[1] - p3[1],2));
        d2 = (pow(p2[0] - p4[0],2) + pow(p2[1] - p4[1],2));
        
        if(a1==0 && a2 == 0 && a3 == 0 && a4 == 0)
            return false;
        
       vector<double>vec = {a1,a2,a3,a4,d1,d2};
       sort(vec.begin(), vec.end());
        
        if(vec[0] == vec[3] && vec[4] == vec[5])
            return true;
  
        return false;
    }
};
