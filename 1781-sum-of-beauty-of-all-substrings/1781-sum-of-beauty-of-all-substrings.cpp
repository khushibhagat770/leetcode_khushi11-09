class Solution {
public:
    int beautySum(string s) {
        int n= s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int count[26] = {0};
            for(int j=i;j<n;j++){
                count[s[j]- 'a']++;
                   
            int mx=0,mn=INT_MAX;
            for(int k=0;k<26;k++){
                 if(count[k]>0){ 
                 mx = max(mx , count[k]);
                 mn =min(mn , count[k]);
                 }
            }
            sum += mx - mn;
        }
        }
        return sum;
    }
};