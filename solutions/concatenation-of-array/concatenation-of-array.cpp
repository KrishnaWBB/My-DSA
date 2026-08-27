class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int n = 0;
        int i = 0;
        while (n!=2){
            ans.push_back(nums[i]);
            i++;
            if(i == nums.size()){
                n++;
                i = 0;
            }
        }
        return ans;
    }
};