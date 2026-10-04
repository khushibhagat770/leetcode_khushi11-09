class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0,right=s.size()-1;
        vector<char>ans;
        while(left<=right){
            ans.push_back(s[right]);
            right--;
        }
        s=ans;
    }
};