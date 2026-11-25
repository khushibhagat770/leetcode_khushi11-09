class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while(i<=num/i){
            if(num==i*i){
                return true;
            }
            i++;
        }
        return false;
    }
};