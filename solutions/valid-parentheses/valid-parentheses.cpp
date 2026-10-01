class Solution {
public:
bool ismatch(char open , char close){
    return ((open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']'));
}
    bool isValid(string s) {
       
        string k = "";

        for (auto it : s){
           

            if(it == '(' || it == '{' || it == '[') k += it;
            else{
                 if (k.empty()) return false;

                char ch = it;
                if(ismatch(k[k.length()-1] , ch))k.pop_back();
                else return false; 
            }
        }
        return k.length() == 0;
    }
};