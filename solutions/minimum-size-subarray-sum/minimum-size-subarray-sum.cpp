class Solution {
public:


    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        int t = 0;
        while(j < nums.size()){
            t += nums[j];
            
            while (t >= target){
                ans = min(ans , j-i+1);
                t -= nums[i];
                i++;
            }
            j++;
        }
        return ans == INT_MAX? 0: ans;
    }
};