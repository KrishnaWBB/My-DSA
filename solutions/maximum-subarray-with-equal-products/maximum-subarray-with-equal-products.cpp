class Solution {
public:
    int maxLength(vector<int>& nums) {
        int best = 0;
       for(int i = 0 ; i < nums.size() ; i++){
        int l = 1;
        int g = 0;
        int prod = 1;
        for(int j = i ; j < nums.size() ; j++){
            prod *= nums[j];
            if(prod > 25200) break;
            l = lcm(l , nums[j]);
            g = gcd(g , nums[j]);

            if(prod == g*l)best = max(best , j-i+1);
        }
       }
       return best;
    }
};