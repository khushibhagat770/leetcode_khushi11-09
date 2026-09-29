class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int>ms1(nums1.begin(),nums1.begin()+m);
        multiset<int>ms2(nums2.begin(),nums2.end());
        multiset<int>ms3;
        ms3.insert(ms1.begin(),ms1.end());
        ms3.insert(ms2.begin(),ms2.end());
        nums1.clear();
        nums1.insert(nums1.end(),ms3.begin(),ms3.end());

    }
};