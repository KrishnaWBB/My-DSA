class Solution {
public:

    string ch(vector<int>&a){
        if(a[0]%2 == a[1]%2){
            return "b";
        }else return "w";

    }
    bool canReach(vector<int>& start, vector<int>& target) {
        
        if(ch(start) == ch(target))return true;
        return false;
    }
};