class Solution {
public:
    int maxArea(vector<int>& height) { 
         int mx_area = 0;
         int i =0;
         int j = height.size()-1;
         while(i<j){ 
            int area = min(height[i],height[j])*(j-i);
             mx_area = max(mx_area,area);
             if(height[i]<height[j]){
                i++;
             }
             else{ 
                j--;
             }
            }
         return mx_area;
    }
};