class Solution {
public:
    bool isPalindrome(int x) {
        long long flag = x;
        long long palin = 0;
        if(x<0) return false;
        
        while(x != 0){
            palin = palin*10 + x%10;
            x /= 10;
            }
        if (flag == palin) return true;
        else return false;
        
    }
};