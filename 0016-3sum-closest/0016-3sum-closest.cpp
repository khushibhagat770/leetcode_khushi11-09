class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int mn = INT_MAX;
        int ans;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                int sum = nums[i]+nums[j]+nums[k];
                   int s1 = abs(sum-target);
                   if(s1<mn){
                    mn = s1;
                    ans = sum;
                   }
                }
            }
        }
        return ans;
    }
};