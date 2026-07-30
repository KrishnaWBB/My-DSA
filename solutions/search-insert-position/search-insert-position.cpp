class Solution {
public:
    int searchInsert(vector<int>& arr, int x) {
        

        int low = 0;
    int high = arr.size()-1;
    int ans ;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] > x){
            
            high = mid-1;
            ans = mid;
        }
        else if(arr[mid] < x){
            low = mid+1;
            ans = low;
        }
        else {
            return mid ;
            break;
        }
        
    }
    return ans;
    }
};