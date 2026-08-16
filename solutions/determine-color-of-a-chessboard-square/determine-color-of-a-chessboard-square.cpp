class Solution {
public:
    bool squareIsWhite(string s) {
        if((s[0]-'a') %2 == (s[1] - '1') %2)return false; return true;
       
    }
};