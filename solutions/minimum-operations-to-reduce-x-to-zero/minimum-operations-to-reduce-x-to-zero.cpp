#define ll long long int
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        ll sum = accumulate(nums.begin() , nums.end() , 0LL);
        if (sum < x) return -1;
        int ans = INT_MIN;
        sum -= x;
        if(sum == 0)return nums.size();

        ll i = 0;
        ll j = 0;
        ll curr = 0;

        while(j < nums.size()){
            curr += nums[j];
            if(curr == sum){
                ans = max(ans , (int)(j-i+1));
            }else if(curr > sum){
                while(i < j && curr > sum){
                curr -= nums[i];
                i++;
                }
                if(curr == sum){
                    ans = max(ans , (int)(j-i+1));
                }
            }
            j++;
        }

        if(ans == INT_MIN)return -1;
        return nums.size()-ans;
        

    }
};