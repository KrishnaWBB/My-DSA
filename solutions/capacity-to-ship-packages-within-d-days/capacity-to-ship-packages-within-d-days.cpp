class Solution {
public:

int daysreq(vector<int>&wt , int cap){
    int load = 0 , days = 1;
        for(int i = 0 ; i < wt.size() ; i++){
            if(load + wt[i] > cap){
                days++;
                load = wt[i];
            }
            else {
                load += wt[i];
            }
        }
        return days;
}
    int shipWithinDays(vector<int>& w, int days) {
        int maxw = INT_MIN;
        for(int  it : w){
            maxw = max(maxw , it);
        }
        int totw = accumulate(w.begin() , w.end() , 0);

        int low = maxw , high = totw;

        while(low <= high){
            int mid = low + (high - low)/2;
          
          if(daysreq(w , mid) <= days){
            high = mid - 1;
          }else {
            low = mid + 1;
          }
            
        }
        return low;
    }
};