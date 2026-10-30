class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();
        vector<string>ans;
        if(n > 10){
            unordered_map<string , int>mp;
            for(int i = 0 ; i <= n-10 ; i++){
                string temp_s = s.substr(i , 10);
                
                if(mp[temp_s] == 1)ans.push_back(temp_s);
                mp[temp_s]++;
            }
        }
        return ans;
    }
};