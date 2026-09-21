class Solution {
public:
    string removeStars(string s) {
        string k= "";
        for( auto it : s){
            if(it != '*'){
                k += it;
            }
            if( it == '*' ){
                k.pop_back();
            }
        }
        return k;
    }
};