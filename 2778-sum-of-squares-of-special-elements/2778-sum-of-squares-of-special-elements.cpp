class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int i;
        int sum=0;
        int n = nums.size();
        for(i=1;i<=n;i++){
            if(n % i == 0 ){
                sum += nums[i-1]*nums[i-1];
            }
        }
        return sum;
    }
};