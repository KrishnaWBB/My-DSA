class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 , j = 0 , cnt = 0;
        map<int , int>mp;

        while(j < s.length()){
            
            if(mp.find(s[j]) == mp.end()){
                mp[s[j]]++;
                cnt = max(cnt , j-i + 1);
                j++;                
            }
            else{
                mp[s[i]]--;
                if(mp[s[i]] == 0)mp.erase(s[i]);
                i++;
            }
        }
        return cnt;
    }
};