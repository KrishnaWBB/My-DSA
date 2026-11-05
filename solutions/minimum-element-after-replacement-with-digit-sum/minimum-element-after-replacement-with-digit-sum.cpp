class Solution {
public:
int sod(int n){
    int ans = 0;
    while(n != 0){
        ans += n%10;
        n /= 10;
    }
    return ans;
}
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
       for(auto it : nums) mini = min(mini , sod(it));
       return mini;
    }
};