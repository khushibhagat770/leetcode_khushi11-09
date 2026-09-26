class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(nums[i]==nums[j]){
                    nums.erase(nums.begin()+j);
                    k--;
                    j--;
                }
            }
        }
        return k;
    }
};