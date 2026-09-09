class Solution {
public:
    
    long long countCommas(long long n) {
        using ll = long long ; 
        if(n<1000) return 0;
        
        long long k = max(0LL , n+1-1000) + max(0LL , n+1-(ll)1e6) +  max(0LL , n+1-(ll)1e9) +  max(0LL , n+1-(ll)1e12) +  max(0LL , n+1-(ll)1e15);
        
        return k;
    }
};