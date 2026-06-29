class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
    vector<int> temp;
    map<int,int>mp;

    for(int i = 0 ; i < arr.size() ; i++ ){
        if(mp.find(t-arr[i]) != mp.end()){
            temp.push_back(mp[t-arr[i]]);
            temp.push_back(i);
            break;
        }
        mp[arr[i]] = i;
    }
    return temp;
      
    }
};