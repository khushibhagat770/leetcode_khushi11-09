class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> nums;

        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0, top = 0;
        int right = n - 1;
        int bottom = m - 1;

        while (top <= bottom && left <= right) {

            // 1. Left → Right
            for (int j = left; j <= right; j++) {
                nums.push_back(matrix[top][j]);
            }
            top++;

            if (top > bottom) break;

            // 2. Top → Bottom
            for (int j = top; j <= bottom; j++) {
                nums.push_back(matrix[j][right]);
            }
            right--;

            if (left > right) break;

            // 3. Right → Left
            for (int j = right; j >= left; j--) {
                nums.push_back(matrix[bottom][j]);
            }
            bottom--;

            if (top > bottom) break;

            // 4. Bottom → Top
            for (int j = bottom; j >= top; j--) {
                nums.push_back(matrix[j][left]);
            }
            left++;
        }

        return nums;
    }
};