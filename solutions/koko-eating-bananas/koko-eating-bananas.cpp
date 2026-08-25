class Solution {
public:

int maxpile(vector<int>& piles){
    int maxi = INT_MIN;
    for(int i = 0 ; i < piles.size() ; i++){
        maxi = max(piles[i] , maxi);
    }
    return maxi;
}
long long totalhrs(int h , vector<int>& piles){
    long long totalh = 0;
    int n = piles.size();
    for(int i = 0 ; i < n ; i++){
        totalh += ceil((double)piles[i] / (double)h);
    }
    return totalh;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = maxpile(piles);

        int low = 1;
        int high = maxi;

        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(totalhrs(mid , piles) <= h ){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};