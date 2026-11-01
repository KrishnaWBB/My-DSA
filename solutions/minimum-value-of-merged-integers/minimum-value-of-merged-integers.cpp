class Solution {
public:
    int merge(int n1 , int n2){
        int power = 0;
        int temp = n2;
        while(n2 != 0){
            power++;
            n2 /= 10;
        }
        int tens = pow(10 , power);
        return (n1*tens + temp);
    }
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;
        
        for( int i = 0 ; i <= nums.size() - 2 ; i += 2){
            int j = i + 1;
            int k = merge(nums[i] , nums[j]);
            mini = min(k , mini);
        }
        return mini;
    }
};