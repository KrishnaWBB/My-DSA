class Solution {
public:
int ncr(int n,int r){
    long long nu = 1  ;
    for( int i = 1 ; i<=r ; i++){
        nu = nu * (n+1-i)/i;
       }
    return nu ;
}
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> ans;
        for(int i = 0 ; i < n ; i++ ){
            vector<int>temp;
            for(int j = 0 ; j<=i ; j++ ){
                temp.push_back(ncr(i,j));
            }
            ans.push_back(temp);
        }

        return ans;
    }
};