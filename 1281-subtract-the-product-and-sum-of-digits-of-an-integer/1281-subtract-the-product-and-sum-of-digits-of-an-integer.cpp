class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int sum = 0;
        while(n!=0){ 
        int digit = n%10;
        p = p*digit;
        sum += digit;
        n = n/10;
        }
        int diff;
        diff = p-sum;
        return diff;
    }
};