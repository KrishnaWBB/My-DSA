class Solution {
public:
    int addDigits(int nums) {
        if(nums == 0)return 0;
        if(nums % 9 == 0)return 9;
        return nums % 9;
    }
};