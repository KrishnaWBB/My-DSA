class Solution {
public:
    void rotate(vector<vector<int>>& m) {
         vector<vector<int>> k(m.size() , vector<int>(m.size())); 

    for(int i = 0; i < m.size(); i++ ){
        for(int j = 0 ;j< i; j++){
             swap(m[i][j] , m[j][i]) ;
        }
    }

    for(int i = 0; i < m.size() ; i++ ){
        for(int j = 0 ;j< m[0].size()/2 ; j++){
            swap(m[i][j] , m[i][m[0].size()-1-j]);
        }
        
    }
     
        return ;
    }
};