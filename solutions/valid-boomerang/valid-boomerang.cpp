class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        float sl1 , sl2;
        int is_par = 0;
        int y1 = points[1][1]-points[0][1];
        int x1 = points[1][0]-points[0][0];
        if(x1 == 0)is_par ++;
        int y2 = points[2][1]-points[0][1];
        int x2 = points[2][0]-points[0][0];
        if(x2 == 0)is_par ++;
       
       
       


        return y1*x2 != y2*x1;
    }
};