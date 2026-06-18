class Solution {
public:
    int missingNumber(vector<int>& a) {
       int sum = 0;
       int n = a.size();
       int truesum = n*(n+1)/2;
       for(int i = 0 ; i < n ; i++ ){
        sum += a[i];
       }
       return truesum-sum ;
    }
};