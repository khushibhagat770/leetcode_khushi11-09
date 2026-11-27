class Solution {
public:
    int countDigits(int num) {
        int i=1;
        int count = 0;
        int k = num;
        while(num!=0){
            i = num%10;
            num = num/10;
            if(k%i == 0){
                count++;
            }
        }
        return count;
    }
};