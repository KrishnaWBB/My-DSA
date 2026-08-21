class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int>ans(n,0);
        int i = 0;
        int val = 1;
        while(candies > 0){
            int give = min (val , candies);
            ans[i] += give;
            candies -= give;
            val++;
            i++;
            if(i == n)i=0;
        }
        return ans;
    }
};