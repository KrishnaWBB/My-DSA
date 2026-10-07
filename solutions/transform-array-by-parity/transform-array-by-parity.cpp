class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>k;
        int e = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%2 == 0) k.push_back(0);
            else e++;
        }
        for(int i = 0 ; i < e ; i++){
           k.push_back(1);
            
        }
        return k;
    }
};