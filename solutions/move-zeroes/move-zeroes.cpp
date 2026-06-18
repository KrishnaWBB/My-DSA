class Solution {
public:
    void moveZeroes(vector<int>& a) {
         vector <int> t ;

    for(int i = 0 ; i < a.size() ; i++ ){
        if(a[i] != 0) t.push_back(a[i]);
    }
     for(int i = 0 ; i < a.size() ; i++ ){
        if(a[i] == 0) t.push_back(0);
    }
     for(int i = 0 ; i < a.size() ; i++ ){
        a[i] = t[i];
    }

    }
};