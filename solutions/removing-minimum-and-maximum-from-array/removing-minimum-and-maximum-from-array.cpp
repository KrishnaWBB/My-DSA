class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN , mini = INT_MAX;
        int n = nums.size();
        int u = 0  , l = 0;
        if(n==1)return 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                u = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                l = i;
            }
        }
        int right = max(l,u);
        int left = min(l,u);

        return min({right+1 , n - left, left+1 + n - right});
    }
};