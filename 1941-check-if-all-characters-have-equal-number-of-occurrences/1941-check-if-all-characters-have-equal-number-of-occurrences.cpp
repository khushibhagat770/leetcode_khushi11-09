class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            int count =0;
            for(int j=0;j<s.size();j++){
                if(s[i]==s[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=ans[0]){
                return false;
            }
        }
        return true;
    }
};