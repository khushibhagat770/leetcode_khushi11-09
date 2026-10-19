
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ans;
        int count[128] = {0};
        int cnt = 0;
        int m;
        int mx = INT_MIN;
        int left = 0;

        for(int i = 0; i < s.size(); i++) {
            count[s[i]]++;
            cnt++;

            while(count[s[i]] > 1) {
                count[s[left]]--;
                left++;
                cnt--;
            }

            mx = max(cnt, mx);
        }

        return mx == INT_MIN ? 0 : mx;
    }
};
