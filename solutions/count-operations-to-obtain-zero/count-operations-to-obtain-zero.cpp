class Solution {
public:
    int countOperations(int num1, int num2) {
        int cnt = 0;
        while(1){
            if(num1 == 0 || num2 == 0){
                return cnt;
            }
            else if(num1 >= num2){
                num1 -= num2;
                cnt++;
            }else {
                num2 -= num1;
                cnt ++;
            }
        }
        return cnt;
    }
};