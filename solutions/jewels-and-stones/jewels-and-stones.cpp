class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>jew;
        for(auto it : jewels){
            jew[it]++;
        }
        int sum = 0;
        for(auto it : stones){
            auto c = jew.find(it);
            if(c != jew.end())sum += c->second;
        }
        return sum;
    }
};