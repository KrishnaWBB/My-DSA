class Solution {
public:
    int minimumChairs(string s) {
        int cnt = 0;
        int chairs = 0;
        for (int i = 0; i < s.length() ; i++){
            if(s[i] == 'E')cnt++;
            else cnt--;
            chairs = max(chairs , cnt);
        }
        return chairs;
    }
};