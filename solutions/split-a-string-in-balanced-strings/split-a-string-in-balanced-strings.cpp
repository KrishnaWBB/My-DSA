class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int k = 0;
        for(auto it : s){
            if(it == 'L')k++;
            if(it == 'R')k--;
            if(k == 0)cnt++;
        }
        return cnt;
    }
};