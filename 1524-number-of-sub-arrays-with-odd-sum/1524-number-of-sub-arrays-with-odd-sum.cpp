class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int count = 0;
        int i = 0;
        int sum = 0;
        int even = 1, odd = 0;
        int mod = 1e9 + 7;

        while(i < arr.size()) {
            sum += arr[i];

            if(sum % 2 != 0) {
                count = (count + even) % mod;
                odd++;
            }
            else {
                count = (count + odd) % mod;
                even++;
            }

            i++;
        }

        return count;
    }
};