class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int pr1 = 0;
        int pr2 = 0;
        int mxp = 0;
        int mnp = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                pr1 = nums[i]*nums[j];
                pr2 = nums[i]*nums[j];
                mxp = max(pr1,mxp);
                mnp = min(pr2,mnp);
            }
        }
        return mxp - mnp;
    }
};