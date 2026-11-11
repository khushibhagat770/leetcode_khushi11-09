class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ans(heights.begin(),heights.end());
        int n = heights.size();
        int count =0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(heights[i] != ans[i]){
                count++;
            }
        }
        return count;
    }
};