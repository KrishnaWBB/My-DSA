class Solution {
public:
    int minRotations(string s) {
        char f = '0';
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            int diff = abs(s[i] - f);
            cnt += min(diff, 10 - diff);
            f = s[i];
        }
        return cnt;
    }
};