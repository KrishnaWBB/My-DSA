class Solution {
public:
int median(vector<int>arr){
    int n = arr.size();
    int med;
    if(n%2==0){
        med = (arr[n/2]+arr[(n/2)-1])/2;
    }else{
        med = arr[n/2];
    }
    return med;
}
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int med = median(nums);
        int steps = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            steps += abs(med - nums[i]);
        }
        return steps;
    }
};