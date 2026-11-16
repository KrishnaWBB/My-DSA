class Solution {
public:
string sum_of_digits(string s){
    int sum = 0;
    for(auto it : s){
        sum += (it - '0');
    }
    return to_string(sum);
    
}
    string digitSum(string s, int k) {
        
        while(s.length() > k){
            string temp = "";
            for(int i = 0 ; i < s.length() ; i = i + k){
                 string t = s.substr(i,k);
                 temp += sum_of_digits(t);
            }
            s = temp;
        }
        return s;
    }
};