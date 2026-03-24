class Solution {
public:
    int maxArea(vector<int>& h) {
      int s = 0 , maxv = 0;
   int e = h.size()-1;

while(s<e){
  int w = e-s;
  int ht = min(h[e],h[s]);
   int cw = w*ht;

   maxv = max(maxv , cw);
   (h[s]<h[e])?s++:e--;
   }
    
return maxv;
    }
};