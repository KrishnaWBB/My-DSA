class Solution {
public:
 bool overlap(vector<int>& rec1, vector<int>& rec2) {
        
        if(rec2[0] >= rec1[2])return false;
        if(rec2[1] >= rec1[3]) return false;
        if(rec2[2] <= rec1[0])return false;
        if(rec2[3] <= rec1[1])return false;

    return true;
    }

    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        

        int area1 = abs(ax2-ax1) * abs(ay2 - ay1);
        int area2 = abs(bx2-bx1) * abs(by2 - by1);
        vector<int>rec1 = {ax1 , ay1 , ax2 , ay2};
        vector<int>rec2 = {bx1 , by1 , bx2 , by2};

        if(overlap(rec1 , rec2)){
            int l = min(by2 , ay2) - max(ay1 , by1);
            int w = min(ax2 , bx2) - max(ax1 , bx1);

            return area1 + area2 - l*w;
        }

        return area1 + area2;
    }
};