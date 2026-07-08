class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        
    vector<int> row(m.size());
    vector<int> col(m[0].size());
    for(int i = 0 ; i<m.size() ;i++ ){
        for(int j = 0 ; j<m[0].size() ; j++){
            if(m[i][j] == 0){
                row[i] = -1;
                col[j] = -1;
            }
        }
    }
    for(int i = 0 ; i<m.size() ;i++ ){
        for(int j = 0 ; j<m[0].size() ; j++){
            if((row[i] == -1) || (col[j] == -1)){
                m[i][j] = 0;              
            }
        }
    }
    }
};