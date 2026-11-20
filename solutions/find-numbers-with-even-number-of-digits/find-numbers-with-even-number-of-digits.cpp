class Solution {
public:
bool no_of_digits(int num){
    int cnt = 0;
    while (num != 0){
        cnt++;
        num /= 10;
    }
    return cnt % 2 == 0;
}
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(auto it : nums){
            if(no_of_digits(it))cnt++;
        }
        return cnt;
    }
};