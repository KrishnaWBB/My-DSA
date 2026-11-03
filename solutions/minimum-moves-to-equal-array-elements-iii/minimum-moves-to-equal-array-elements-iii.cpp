class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        int ans = 0;
        for(auto it : nums){
            maxi = max(maxi , it);
        }

        for(auto it : nums){
            ans += maxi - it;
        }

        return ans;
    }
};