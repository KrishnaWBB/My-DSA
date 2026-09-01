class Solution {
public:
bool possible(vector<int>& arr , int day , int m , int k){
    int cnt = 0;
    int nob = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] <= day)cnt++;
        else{ 
            nob += (cnt/k);
            cnt = 0;
            }
    }
    nob += cnt/k;
    return nob >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
       int maxi = INT_MIN;
       int mini = INT_MAX;
       if(1LL*m*1LL*k > bloomDay.size())return -1;
       for(auto it : bloomDay){
        maxi = max(maxi , it);
        mini = min(mini , it);
       }
       int low = mini;
       int high = maxi;
       
       while(low <= high){
        int mid = low + (high-low)/2;
        if(possible(bloomDay , mid , m , k) == true){
            high = mid - 1;
        }else low = mid + 1;
       }
       return low; 
    }
};