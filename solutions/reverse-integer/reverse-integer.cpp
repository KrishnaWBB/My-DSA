class Solution {
public:
    int reverse(int x) {
        
        long k = 0;
        
            while(x != 0 ){
                k = k*10 + x%10;
                x /= 10;
            }
            
        if(k > INT_MAX || k < INT_MIN ) return 0;
        return k;
    }
};