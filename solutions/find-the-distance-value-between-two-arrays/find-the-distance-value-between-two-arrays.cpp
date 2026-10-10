class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt = arr1.size();
        for(auto it1 : arr1){
            bool flag = false;
            for(auto it2 : arr2){
                if(abs(it1-it2) <= d){flag = true; break;}
            }
            if(flag == true){
                cnt --;
                flag = false;
            }
        }
        return cnt;
    }
};