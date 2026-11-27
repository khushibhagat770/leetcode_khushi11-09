class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        int max=n/2;

        for(i=0;i<n;i++){
            int count=1;

            for(j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }

            if(count>max){
                return nums[i];
            }
        }

        return 0;
    }
};