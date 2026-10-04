class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<char> composite(n, 0);
        int count = n / 2;                    // 2 aur saare odd numbers (>=3) maan lo prime

        for (int i = 3; i * i < n; i += 2) {  // sirf odd i
            if (!composite[i]) {
                for (int j = i * i; j < n; j += 2 * i) {   // sirf odd multiples
                    if (!composite[j]) {
                        composite[j] = 1;
                        count--;              // ek prime kam hua
                    }
                }
            }
        }
        return count;
    }
};