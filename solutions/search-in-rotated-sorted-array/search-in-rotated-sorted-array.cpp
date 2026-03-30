class Solution {
public:
    int search(vector<int>& a, int k) {
       
int n = a.size();
int s = 0 , e = n-1;
while(e>=s){
   int mid = (e+s)/2;
   if ( a[mid] == k){
      return mid;
   }else if(a[mid]>=a[s]){
      if(a[s]<=k && k <= a[mid]){
         e= mid-1;
      } else {
         s=mid+1;
      }
   } else {
      if(a[mid] <= k && k <= a[e]){
         s =mid +1;
      } else {
         e= mid-1;
      }
   }
}

return -1;
} 
    
};