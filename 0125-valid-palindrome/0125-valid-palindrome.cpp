class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for(int i=0;i<s.size();i++){
            char c = s[i];
        
        if(c >= 'A' && c <= 'Z'){
            clean += c + 32;
        }
        else if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
            clean += c;
        }
    }
     int left=0, right = clean.size()-1;
     while(left < right){
        if(clean[left] != clean[right])
            return false;
            left++;
            right--;
     }
     return true;
    }
};