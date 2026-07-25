class Solution {
public:
    int findComplement(int n) {
        int i=0;
        int j=0;
        while(i<n){
           i += pow(2,j);
           j++;
        }
        return i-n;
    }
};