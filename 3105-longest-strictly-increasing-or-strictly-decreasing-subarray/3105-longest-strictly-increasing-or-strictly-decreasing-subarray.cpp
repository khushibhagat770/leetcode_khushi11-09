class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count = 1;
        int count1 = 1;
        int c1 =0;
        int c2 =0;
        int n = nums.size();
        vector<int>ans;
        if(nums.size()==1){
            return 1;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
                 count1 = 1;
            }
            else if(nums[i]>nums[i+1]){
                count1++;
                count = 1;
            }
            else{
                 count = 1;
                 count1 = 1;
            }
            c1 = max(count,c1);
            c2 = max(count1,c2);
        }
        return max(c1,c2);
    }
};