class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int x = 0, y = 0, n = grid.size() * grid.size() + 1;
        vector<int> ans, frc(n, 0);
        for (auto i : grid) {
            for (auto j : i) {
                frc[j]++;
            }
        }
        for (int i = 1; i < n; i++) {
            if (frc[i] == 0) {
                y = i;
            } else if (frc[i] == 2) {
                x = i;
            }
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};