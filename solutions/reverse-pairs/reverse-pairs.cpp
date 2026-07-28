class Solution {
public:
int merge(vector<int> &arr , int low , int mid , int high){

    

    int cnt = 0;
    int r = mid+1;
    for (int i = low; i <= mid; i++) {
        while (r <= high && (long long)arr[i] > 2LL * arr[r]) {
            r++;
        }
        cnt += (r - (mid + 1));
    }
    
    
    int left = low;
    int right = mid+1;
    vector<int>temp;
    
    
    

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left ++;
        } else {
            temp.push_back(arr[right]);
            right++;

        }
    }
    while(left<= mid){
        
            temp.push_back(arr[left]);
            left ++;
    
    }
    while(right<= high){
        
            temp.push_back(arr[right]);
            right ++;
    
    }
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i-low];
    }

    return cnt;
}

 int mergesort(vector<int>&arr , int low , int high){

        if(low>= high)return 0;

        int mid = (low+high) / 2;
        int cnt = 0;
        cnt += mergesort(arr , low , mid);
        cnt += mergesort(arr , mid+1 , high);
        cnt += merge(arr,low,mid,high);

        return cnt;
    }
    int reversePairs(vector<int>& arr) {
        
    return mergesort(arr ,0, arr.size()-1);
    }
};