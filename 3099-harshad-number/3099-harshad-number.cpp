class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int y=x;
        int digit;
        int sum=0;
        while(x!=0){
           digit = x%10;
            sum = digit + sum;
            x = x/10;
        }
        if(y % sum == 0){
            return sum;
        }
        return -1;
    }
};