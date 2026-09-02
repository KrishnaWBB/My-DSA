class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       
        int maxi = INT_MIN;
        
        for(auto it : nums){
            maxi = max(maxi , it);
        }

        int low = 1;
        int high = maxi;
        while(low <= high){
            int mid = low + (high - low)/2;
            int k = 0;
            for(int it : nums){
                k += ceil((double)it/(double)mid);
            }
            if(k <= threshold){
                high  = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};