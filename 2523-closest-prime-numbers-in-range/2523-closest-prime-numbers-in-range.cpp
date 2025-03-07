class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int x = -1, y = -1, min = 1e7;
        bool flag;
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            flag = true;
            for (long long j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag && i != 1) {
                primes.push_back(i);
            }
        }
        for (int i = 0, size = primes.size(); i < size - 1; i++) {
            if (primes[i + 1] - primes[i] < min) {
                min = primes[i + 1] - primes[i];
                x = primes[i];
                y = primes[i + 1];
            }
        }
        return {x, y};
    }
};