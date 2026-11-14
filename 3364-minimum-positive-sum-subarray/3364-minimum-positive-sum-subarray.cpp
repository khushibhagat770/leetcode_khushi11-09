class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                int count = j-i+1;
                if(count>=l && count<=r && sum>0){
                    mn = min(sum,mn);
                } 
            }
            }
            if(mn == INT_MAX){
                return -1;
            }
            
        return mn;
    }
};