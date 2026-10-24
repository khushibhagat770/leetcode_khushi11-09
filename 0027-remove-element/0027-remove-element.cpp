class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count=0;
        //sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);  
                i--;
                n--;
                count++;
            } 
        }
        return nums.size();
    }
};