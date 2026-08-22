class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n =nums.size();
        long long b=INT_MIN;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
              long long x =nums[i] ;
              long long y =nums[j];
              long long g = gcd(x,y); 
              long long s=(x*y)/(g*g);
              b=max(b,s);
            }
        }
        return b;
    }
};