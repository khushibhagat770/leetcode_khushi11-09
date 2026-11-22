class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int m = -1, k = n;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'a') {
                m = i;
            }

            if(s[i] == 'b' && k == n) {
                k = i;
            }
        }

        if(m < k) {
            return true;
        }

        return false;
    }
};
