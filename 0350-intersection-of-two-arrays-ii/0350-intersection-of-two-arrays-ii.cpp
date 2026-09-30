class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>ms1(nums1.begin(),nums1.end());
        multiset<int>ms2(nums2.begin(),nums2.end());
        multiset<int>ms3;
        for(int x:ms1){
            if(ms2.find(x)!=ms2.end()){
                ms3.insert(x);
                ms2.erase(ms2.find(x));
            }
        }
        return vector<int>(ms3.begin(),ms3.end());
    }
};