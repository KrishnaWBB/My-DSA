class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if(sum > num*9)return "";
        int nines = sum/9;
        int extra = sum%9;

        string ans(nines , '9');

        if(extra > 0){
            ans.push_back(extra + '0');
        }
        ans.append(num - ans.length() , '0');

        return ans;
    }
};