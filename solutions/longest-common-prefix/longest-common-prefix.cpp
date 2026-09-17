class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());

        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        if(s1[0] != s2[0]) return "";
        int cnt = 0;
        int i = 0 , j = 0;
        while(i < s1.size() && j < s2.size() && s1[i] == s2[j]){
            cnt ++;
            i ++;
            j ++;
        }
        return s1.substr(0 , cnt);
    }
};