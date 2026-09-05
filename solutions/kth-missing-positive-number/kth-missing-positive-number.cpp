class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int s = 0 , e = n-1;
        int ans = arr.size();
        while(s <= e){
            int mid = e + (s-e)/2;
            if(arr[mid] - mid - 1 >= k){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return ans + k;
    }
};