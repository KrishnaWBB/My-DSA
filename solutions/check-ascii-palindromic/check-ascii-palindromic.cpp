class Solution {
public:
    bool isPalindromic(string s) {
        string bin = "";
        

        for(int i = 0; i < s.length() ; i++){
            string temp ="";
            int x = s[i];
            for(int j = 0 ; j < 8 ; j++){
                temp += char((x%2) + '0');
                x /= 2;
            }
            reverse(temp.begin() , temp.end());
            bin += temp;
        }
                
        int l = 0;
        int r = bin.length() - 1;
        while(l < r){
            if(bin[l] != bin[r])return false;
            l++;
            r--;
        }
        return true;
    }
};