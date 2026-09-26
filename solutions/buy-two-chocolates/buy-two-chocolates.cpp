class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallest = INT_MAX;
        int idx;
        int smallest2 = INT_MAX;

        for(int i = 0 ; i < prices.size() ; i++){
            if(prices[i] < smallest){
                smallest = prices[i];
                idx = i;
            }
        }
        prices.erase(prices.begin()+idx);
        for(auto it : prices){
            smallest2 = min(it , smallest2);
        }

        if(smallest + smallest2 <= money)return (money - (smallest + smallest2));

        return money;

    }
};