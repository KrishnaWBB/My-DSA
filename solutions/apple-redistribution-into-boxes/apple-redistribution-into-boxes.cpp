class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int tota = 0;
        
        for( auto it: apple){
            tota += it;
        }
        sort(capacity.begin() , capacity.end());
        for(int i = capacity.size()-1 ; i >= 0 ; i--){
            if(tota > 0){
                tota -= capacity[i];
            }
            else{
                return capacity.size() - i - 1;
               
            }
        }
        return capacity.size();
    }
};