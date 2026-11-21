class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int cnt = 0;
        for(auto it : nums){
            mini = min(mini , it);
            maxi = max(maxi , it);
        }
        for(auto it : nums){
            if (it < maxi && it > mini)cnt++;
        }
        return cnt;
    }
};