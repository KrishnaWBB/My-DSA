class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>sq;
        for(int i = 0 ; i < nums.size() ; i++){
           sq.push_back( nums[i]*nums[i]);
        }
        sort(sq.begin() , sq.end());
        int mid = sq.size()/2;
        long long sum = 0;

        for(int i = 0 ; i< nums.size(); i++){
            if(i<mid) sum -= sq[i];
            else sum += sq[i];
        }
        return sum;
    }
};