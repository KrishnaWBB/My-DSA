class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        string a;

        for (auto ch : s) {
            if (ch != '0') {
                a += ch;
            }
        }

        if (a.empty()) return 0;

        return stoll(a);
    }
};