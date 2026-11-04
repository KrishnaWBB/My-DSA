class Solution {
public:
int waviness(int n){
    int cnt = 0;
    string k = to_string(n);
    for(int i = 1 ; i < k.length()-1 ; i++){
        if(k[i] - '0' > k[i-1] - '0'  && k[i] - '0'  > k[i+1] - '0' )cnt++;
        if(k[i] - '0'  < k[i-1] - '0'  && k[i] - '0'  < k[i+1] - '0' )cnt++;
    }
    return cnt;
}
    int totalWaviness(int num1, int num2) {
        int cnt = 0;
        for(int i = num1 ; i <= num2 ; i++){
            cnt += waviness(i);
        }
        return cnt;
    }
};