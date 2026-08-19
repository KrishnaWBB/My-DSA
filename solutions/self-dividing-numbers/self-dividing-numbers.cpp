class Solution {
public:
    bool div(int n){
        int t = n;
        while(n!=0){
            int k = n%10;
            if (k==0)return false;
            if(t%k==0){
                n/=10;
            }
            else return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i = left ; i<=right ; i++){
            if(div(i) == true)ans.push_back(i);
        }
        return ans; 
    }
};