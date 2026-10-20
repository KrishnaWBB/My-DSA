class Solution {
public:
    bool judgeSquareSum(int c) {
        long long n = pow( c, 0.5);

        long long l = 0 , r = n ;

        while(l <= r){
            long long tot = l*l + r*r ;
            if (tot == c)return true;

            else if(tot < c) l++;

            else r--;
        }
        return false;
    }
};