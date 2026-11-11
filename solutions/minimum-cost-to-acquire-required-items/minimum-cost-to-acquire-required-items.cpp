class Solution {
public:
    typedef long long ll;

    long long minimumCost(int cost1, int cost2, int costboth, int need1, int need2) {
        ll amt = 0;

        if (1LL * cost1 + cost2 <= costboth)
            return (1LL * cost1 * need1) + (1LL * cost2 * need2);

        else {
            ll both = min(need1, need2);

            amt += both * costboth;

            need1 -= both;
            need2 -= both;

            if (need1 > 0)
                amt += 1LL * need1 * min(costboth, cost1);

            else if (need2 > 0)
                amt += 1LL * need2 * min(costboth, cost2);
        }

        return amt;
    }
};