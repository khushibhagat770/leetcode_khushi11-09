class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n=mountain.size();
        vector<int> ans;
        for(int i=0;i<n-2;i++){
          if(mountain[i+1] > mountain[i] && mountain[i+1] > mountain[i+2]){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};