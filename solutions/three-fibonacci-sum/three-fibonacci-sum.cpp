class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a = 2, b = 2;
    if(n==2)return true;
    for (int i = 0; i < n; i++) {
        

        int c = a + b;
        if(c > n)return false;
        else if (c == n)return true;

        
        a = b;
        b = c;
    }
        return false;
    }
};