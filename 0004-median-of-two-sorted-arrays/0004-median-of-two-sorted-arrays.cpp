class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //int m = nums1.size();
        //int n = nums2.size();
        vector<int>ans;
        double sum = 0;
        ans.insert(ans.end(),nums1.begin(),nums1.end());
        ans.insert(ans.end(),nums2.begin(),nums2.end());
        sort(ans.begin(),ans.end());
        int left = 0;
        int right = ans.size()-1;
        int mid = (left+right)/2;
        if((ans.size()) % 2 != 0){
            sum = ans[mid];
            return sum;
        }
        else{
            sum = (ans[mid] + ans[mid+1])/2.0 ;
        }
        return sum;
    }
};