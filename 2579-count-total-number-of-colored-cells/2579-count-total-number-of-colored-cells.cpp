class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1, cnt = 4;
        n--;
        while (n) {
            ans += cnt;
            cnt += 4;
            n--;
        }
        return ans;
    }
};