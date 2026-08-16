class Solution {
public:
    int digitFrequencyScore(int n) {
       map<int , int>mp;

       
       while(n!=0){
        int k;
        k = n%10;
        mp[k]++;
        n/=10;
       }
        int sum = 0;
        for(auto it : mp){
            sum += it.first*it.second;
        }
        return sum;
    }
};