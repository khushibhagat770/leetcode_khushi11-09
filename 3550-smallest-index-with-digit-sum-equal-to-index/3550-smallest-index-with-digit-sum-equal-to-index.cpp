class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int k=0;
            int sum=0;
            while(nums[i]!=0){ 
            k = nums[i]%10;
            sum += k;
            nums[i] = nums[i]/10;
        }
        if(i==(nums[i]+sum)){
                return i;
            }  
        }
        return -1;
    }
};