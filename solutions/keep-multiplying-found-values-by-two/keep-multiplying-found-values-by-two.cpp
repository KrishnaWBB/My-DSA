class Solution {
public:
bool ispresent(int x , vector<int>& arr){
    for(auto it : arr){
        if (it == x)return true;
    }
    return false;
}
    int findFinalValue(vector<int>& nums, int original) {
        
        int k = original;
        while(ispresent(k , nums)) k *= 2;

        return k;
    }
};