class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
        
        while(n!=0){
            int k = n%10;
            v.push_back(k);
            n/=10;
        }
        int p = v.size();
        sort(v.begin() , v.end());
        return v[p-1]*v[p-2];
    }
};