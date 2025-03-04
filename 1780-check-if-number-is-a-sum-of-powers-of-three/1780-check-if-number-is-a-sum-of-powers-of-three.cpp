class Solution {
public:
    bool checkPowersOfThree(int n) {
        bool flag = true;
        int d, r = 0;
        while (n != 0) {
            d = n / 3;
            r = n - (d * 3);
            n /= 3;
            if (r == 2) {
                flag = false;
                break;
            }
        }
        return flag;
    }
};