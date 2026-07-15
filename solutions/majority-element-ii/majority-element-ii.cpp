class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>temp;
        for(auto it : arr){
            mp[it]++;
             if(mp[it] == (arr.size()/3)+1) temp.push_back(it);
        }
        
        return temp;

    }
};