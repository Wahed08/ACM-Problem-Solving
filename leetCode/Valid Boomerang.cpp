class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        double area;
        
        //area of triangle from 3 points
        //Formula = [Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)] / 2;
        
        area = (((points[0][0] * (points[1][1] - points[2][1])) + (points[1][0] *                      (points[2][1] - points[0][1])) + (points[2][0] * (points[0][1]-                       points[1][1])))*1.0) / 2;
        cout<<area<<endl;
        if(area == 0) // it does not make triangle, they make a straight line
            return false;
        return true;
    }
};
