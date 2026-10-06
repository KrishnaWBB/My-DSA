class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0 , close = 0 , cnt = 0;

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == ')')open--;
            else open++;

            if(open < 0){
                cnt++;
                open = 0;
                }
        }
        cnt += open;
        return cnt;
    }
};