class Solution {
public:
    int minInsertions(string s) {
        int cnt = 0;
        int res = 0;

        int i = 0;
        while(i < s.length()){
            if(s[i] == '('){
                cnt++;
                i++;
            }else{
                if(cnt > 0){
                    cnt --;

                }else{
                    res++;
                }
                if(i+1 < s.length() && s[i+1] == ')'){
                    i+=2;
                }else{
                    res++;
                    i++;
                }
            }
        }
        return res + cnt*2;
    }
};