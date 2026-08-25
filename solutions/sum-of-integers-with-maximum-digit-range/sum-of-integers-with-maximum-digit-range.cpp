class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int range = INT_MIN;
        int maxsum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int temp = nums[i] , hi = INT_MIN , lo = INT_MAX;
            while(temp != 0){
                int k = temp%10;
                hi = max(hi , k);
                lo = min(lo , k);
                temp /= 10;
            }
            if(hi - lo > range){
                range = hi - lo;
                maxsum = nums[i];
            }
            else if(hi - lo == range){
                maxsum += nums[i];
            }
        }
        
        return maxsum;
    }
};