class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string, string> mp;

        for(auto it : knowledge) {
            mp[it[0]] = it[1];
        }
        for(int i = 0 ; i < s.length() ; i++){

            if(s[i] == '('){
                int idx = i;
                string t ="";
                int cnt = 0;
                while (s[i] != ')'){
                    cnt++;
                    t.push_back(s[i]);
                    i++;
                }
                t.push_back(')');
                string k = t.substr(1,t.length()-2);
                string val = "?";
                 if(mp.find(k) != mp.end()) {
                    val = mp[k];
                }
                s.replace(idx , t.length() , val);
                i = idx + val.length()-1;
            }
        }
        return s;
    }
};