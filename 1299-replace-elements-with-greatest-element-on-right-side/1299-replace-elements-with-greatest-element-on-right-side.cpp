class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int mx = -1;
            for(int j=i+1;j<arr.size();j++){
                mx = max(arr[j],mx);
            }
            ans.push_back(mx);
        }
        return ans;
    }
};