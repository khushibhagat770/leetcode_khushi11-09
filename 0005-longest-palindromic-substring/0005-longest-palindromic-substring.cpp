
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        int maxLen = 1;
        int start = 0;

        while (left < n) {
            right = n - 1;

            while (right >= left) {
                bool palindrome = true;

                int i = left;
                int j = right;

                while (i < j) {
                    if (s[i] != s[j]) {
                        palindrome = false;
                        break;
                    }
                    i++;
                    j--;
                }

                if (palindrome && right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    start = left;
                }

                right--;
            }

            left++;
        }

        return s.substr(start, maxLen);
    }
};
