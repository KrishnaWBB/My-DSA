class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin() , a.end());
        int n = a.size();
        set <vector<int>> k;

        for(int i = 0 ; i < n ; i++ ){
            int left = i + 1;
            int right = n - 1;

            while(left < right){
                int sum = a[i] + a[right] + a[left];
                if(sum > 0) right --;
                else if(sum < 0) left ++;
                else {
                    vector<int> temp = {a[i] , a[left] , a[right]};
                    k.insert(temp);
                    temp.clear();
                    left ++ ;
                    right --;
                }
            }
        } 
        vector<vector<int>> ans (k.begin() , k.end());
        return ans;
    }
};