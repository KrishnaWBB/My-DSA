class Solution {
public:
void helper(vector<string> &v , int n, int cc , int oc , string a){
    if(oc == n && cc == n){
        v.push_back(a);
        return ;
    }

    if(oc < n) helper( v , n , cc , oc + 1 , a+"(" );
    if(cc < oc) helper( v , n , cc + 1 , oc , a+")" );
}
    vector<string> generateParenthesis(int n) {
        int oc = 0;
        int cc = 0;
        vector<string>v;
        helper( v , n , cc , oc , "");

        return v;
    }
};