class Solution {
public:
    string convertToBase7(int num) {
        string k = "";
        bool flag = false;
        if (num == 0)return "0";
        if(num < 0){
            num = -num;
             flag = true;
        }

        while(num != 0){
            k = k + to_string(num%7);
            num/=7;
        }
        reverse(k.begin() , k.end());
        if(flag == true)return "-"+k;
        return k;
    }
};