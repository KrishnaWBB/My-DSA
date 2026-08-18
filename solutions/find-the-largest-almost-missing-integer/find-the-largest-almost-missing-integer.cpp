class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int  l = 0;
        int r = l+k-1;
        int maxi = INT_MIN;
        map<int,int>mp;
        if(nums.size()==k){
            int m = INT_MIN;
            for(int i = 0 ; i < n ; i++){
                m = max(m,nums[i]);
            }
            return m;
        }
        while(r<nums.size()){
            for(int i = l ; i <= r ; i++){
                mp[nums[i]]++;
            }
            l++;
            r++;
        }
        
        for(auto it : mp){
            
            if(it.second == 1)maxi = max(maxi , it.first);
        }
        if(maxi!=INT_MIN)return maxi;
        return -1;
    }
};