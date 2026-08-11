class Solution {
public:
    long long  mySqrt(long long  x) {
        long long  low = 1 , high = x;
        long long  ans;
        while(low<=high){
            long long mid = low + (high-low)/2;
           if(mid*mid <= x){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return  ans;
    }
};