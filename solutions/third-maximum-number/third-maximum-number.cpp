class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        for(auto it : nums){
            st.insert(it);
        }
        if(st.size() < 3){
            int maxi = INT_MIN;
            for(auto it : st){
                maxi = max(maxi , it);
            }
            return maxi;
        }
        else{
            vector<int>a(st.begin() , st.end());
            return a[a.size()-3];
        }
        return 1;
    }
};