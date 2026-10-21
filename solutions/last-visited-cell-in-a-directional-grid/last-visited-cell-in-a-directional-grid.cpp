class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int r = 0, c = 0;

        set<pair<int, int>> st;
        st.insert({0, 0});

        while (true) {
            int nr = r, nc = c;

            if (grid[r][c] == 'R') {
                nc++;
            }
            else if (grid[r][c] == 'L') {
                nc--;
            }
            else if (grid[r][c] == 'D') {
                nr++;
            }
            else if (grid[r][c] == 'U') {
                nr--;
            }

            if (nr < 0 || nr >= m || nc < 0 || nc >= n) {
                break;
            }

            if (st.find({nr, nc}) != st.end()) {
                break;
            }

            r = nr;
            c = nc;

            st.insert({r, c});
        }

        return {r, c};
    }
};