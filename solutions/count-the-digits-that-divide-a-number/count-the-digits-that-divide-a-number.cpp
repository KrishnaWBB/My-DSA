class Solution {
public:
    int countDigits(int num) {
        int t = num;
        int cnt = 0;

        while(num != 0){
            int k = num%10;
            if(t%k==0)cnt++;
            num/=10;
        }
        return cnt;
    }
};