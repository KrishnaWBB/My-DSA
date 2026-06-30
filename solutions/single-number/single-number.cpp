class Solution{    
public:    
    int singleNumber(vector<int>& a){
        int c = 0 ;
        for(int i = 0 ; i < a.size() ; i++){
            c ^= a[i];
        }
        return c;
    }
};