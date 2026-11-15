class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string>ans;
        int count = 2;
        for(int i=1;i<num.size()-1;i++){
            if(num[i]==num[i+1] && num[i]==num[i-1]){
                ans.push_back(num.substr(i-1,3));
            }
        }
        if(ans.size()==0){
            return "";
        }
        string mx = ans[0];
        for(int i=0;i<ans.size();i++){
            if(ans[i]>mx){
                mx = ans[i];
            }
        }
        return mx;
    }
};