class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0;
        int cnt = 0;
        int diff = INT_MAX;

        for(int i = 0 ; i < nums.size()-1 ; i++){
            int d = nums[i+1] - nums[i];
            if( diff == d){
                cnt++;
            }else{
                diff = d;
                cnt = 0;
            }
            ans += cnt;
        }
        return ans;
    }
};