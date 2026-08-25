class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        if(nums.size()==1){
            if(nums[0] > k)return k;
            else if(nums[0] == k)return k*2;
            
        }
        set<int>st;
        for(auto it : nums){
            if(it % k == 0)st.insert(it);
        }
        vector<int>v(st.begin() , st.end());
        for(int i = 0 ; i < v.size() ; i++){
            if(k*(i+1) != v[i])return k*(i+1);
        }
        return k*(v.size()+1);
    }
};