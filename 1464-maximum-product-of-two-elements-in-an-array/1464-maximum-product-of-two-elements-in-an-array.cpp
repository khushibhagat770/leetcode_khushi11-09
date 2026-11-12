class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx =0;
        int pr = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                pr = (nums[i] - 1) * (nums[j] - 1);
                mx = max(pr,mx);
            }
        }
        return mx; 
        }
};