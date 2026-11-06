class Solution {
public:
    bool isHappy(int n) {
        int digit;
        int new1;

        unordered_set<int> st;

        while(n != 1 && st.find(n) == st.end()) {

            st.insert(n);

            new1 = 0;
            int temp = n;

            while(temp != 0) {
                digit = temp % 10;
                new1 += digit * digit;
                temp = temp / 10;
            }

            n = new1;
        }

        return n == 1;
    }
};