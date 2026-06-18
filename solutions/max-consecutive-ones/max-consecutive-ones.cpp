class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int ones = INT_MIN;
    int c = 0;

    for(int i = 0; i < a.size() ; i++){
        if(a[i] == 1) c++;
        else if(a[i] == 0 ){
            ones = max(ones , c);
            c = 0;
        }
    }
    ones = max(ones , c);
    return ones;
    }
};