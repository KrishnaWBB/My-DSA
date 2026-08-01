class Solution {
public:
int lowerbound(vector<int>&arr , int x){

    int low = 0;
   int high = arr.size()-1;
   
    int lb = arr.size();
   while(low <= high){
    int mid = (low + high)/2;
    if(arr[mid] >= x) {
         lb = mid;
        high = mid-1;    
    }
    else {
      
       low = mid+1;
    } 

   }
   return lb;
}

int upperbound(vector<int>&arr , int x){

    int low = 0;
   int high = arr.size()-1;
   int ub = arr.size();

   while(low <= high){
    int mid = (low + high)/2;

    if(arr[mid] > x) {
        ub = mid;
        high = mid-1;
        }
    else{
       low = mid+1;
    } 

   }
   return ub;

}
    vector<int> searchRange(vector<int>& arr, int x) {
        int lb = lowerbound(arr,x);
        if(lb==arr.size() || arr[lb] != x) return{-1,-1};
        return {lb , upperbound(arr,x)-1};
    }
};