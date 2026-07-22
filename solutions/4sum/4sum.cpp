class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        vector<vector<int>> result;
        int n = a.size();
        sort(a.begin() , a.end());
        for(int i = 0 ; i < n ; i++ ){
            if( i>0 && a[i] == a[i-1])continue;
            for(int j = i+1 ; j < n ; j++ ){
                if( j>i+1 && a[j] == a[j-1])continue;
                int left = j+1;
                int right = n-1;

                while(left < right){
                    long long sum = a[i];
                    sum += a[j];
                    sum += a[left];
                    sum += a[right];
                    if(sum == target){
                        vector<int>temp = {a[i] , a[j] , a[left] , a[right]};
                        result.push_back(temp);
                        temp.clear();
                        left++;
                        right--;
                        while(left < right && a[left] == a[left-1])left++;
                        while(left < right && a[right] == a[right+1])right--;
                    }
                    else if(sum < target)left++;
                    else right--;
                    
                }

            }
        }
        
        return result;
    }
};