class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<float , int>mp; 
        for (float it : arr){
           if ((mp.find(it / 2) != mp.end()) || (mp.find(it * 2) != mp.end())) return true;
            mp[it]++;
        }
        return false;
    }
};