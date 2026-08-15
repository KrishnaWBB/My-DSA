class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
      int x =0;
      for(int i : a){
        x ^= i;
      }

        return x;
    }
};