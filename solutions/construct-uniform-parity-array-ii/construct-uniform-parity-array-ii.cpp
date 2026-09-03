class Solution {
public:
    bool uniformArray(vector<int>& n) {
        int smallestodd = INT_MAX;
        for(auto it : n){
            if(it%2==1)smallestodd = min(smallestodd , it);
        }
        if(smallestodd == INT_MAX)return true;
        for(auto it : n){
            if(it%2==0 && it <= smallestodd)return false;
        }
        return true;
    }
};