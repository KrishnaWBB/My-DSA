class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = INT_MIN;
        int idx ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                idx = i;
            }
        }
        int maxi2 = INT_MIN;

        for(auto it : nums){
           if (it > maxi2 && it < maxi)maxi2 = it;
        }

        if(maxi2 * 2 <= maxi)return idx;
        return -1;
    }
};