class Solution {
public:
    string reverseVowels(string s) {
        int  i = 0 , j = s.length()-1;
        set<char>st = {'a','e','i','o','u','A','E','I','O','U'};
        while(i<j){
            
           if(st.find(s[j]) == st.end()){
                j--;
            }
            else if(st.find(s[i]) == st.end()){
                i++;
            }
            else{
                swap(s[i] , s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};