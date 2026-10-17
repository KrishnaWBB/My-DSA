class Solution {
public:
    int digit_sum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        vector<int> arr = nums;
        int cnt = 0;
        auto lambda = [&](int a , int b){
            int ds1 = digit_sum(a);
            int ds2 = digit_sum(b);

            if(ds1 != ds2)return ds1 < ds2;
            return a < b;
        };
        sort(arr.begin(), arr.end(), lambda);
        unordered_map<int,int>mp;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        
        for (int i = 0; i < nums.size(); i++) {
           int trueval = arr[i];
           int currval = nums[i];

           if(trueval == currval) continue;

           int idx = mp[trueval];

           nums[i] = trueval;
           nums[idx] = currval;

           mp[trueval] = i;
           mp[currval] = idx;
           cnt++;
        }
        return cnt;


        
    }
};