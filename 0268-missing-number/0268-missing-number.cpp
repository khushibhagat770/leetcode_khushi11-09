class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>s1(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(s1.find(i)==s1.end()){
                return i;
            }
        }
        return n;
    }
};