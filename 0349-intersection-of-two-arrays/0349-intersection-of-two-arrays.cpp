class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>result;
        for(int x : s1){
            // x is the no. taken from s1 
            if(s2.find(x)!=s2.end()){ // in s2.find(x) if x is present in s2 then if it's index is not euql to s2.end then insert x into result set
                result.emplace(x);
            }
        }
        // need to convert set into vector to return u can't return in set only if function is of vector
        return vector<int>(result.begin(),result.end());
    }
};