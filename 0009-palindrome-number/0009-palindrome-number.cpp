class Solution {
public:
    bool isPalindrome(int x) {
        int digit;
        int rev=0;
        if(x<0 || x%10 ==0 && x!=0){
            return false;
        }
        while(x>rev){
        digit = x % 10;
        rev = rev*10 + digit;
        x = x/10;
        }
        return x==rev || rev/10 == x;
    }
};