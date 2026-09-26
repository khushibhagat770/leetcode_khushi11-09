class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        int k=nums.size();
        for(int i=0;i<k;i++){
            if(nums[i]>=0){
                p.push_back(nums[i]);
            }
            if(nums[i]<0){
                n.push_back(nums[i]);
            }
         }
         int l=p.size();
         int pos=0;
         int neg=0;
         for(int i=0;i<k;i++){
            if(i%2==0){
                nums[i]=p[pos];
                pos++;
            }
            else{
                nums[i]=n[neg];
                neg++;
            }
         }
         return nums;
        
    }
};