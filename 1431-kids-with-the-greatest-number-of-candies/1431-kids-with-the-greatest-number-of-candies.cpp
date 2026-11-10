
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int grt = candies[0];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(candies[j] > grt){
                    grt = candies[j];
                }
            }
        }

        vector<bool>ans;

        for(int i=0;i<n;i++){ 
            if((candies[i] + extraCandies) >= grt){
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
