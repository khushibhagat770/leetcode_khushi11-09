
class Solution {
public:
    int trap(vector<int>& height) {
        int area = 0;
        int n = height.size();

        for(int i = 0; i < n; i++) {
            if(height[i] > 0) {

                int mx = 0;
                int pos = -1;

                for(int j = i + 1; j < n; j++) {

                    if(height[j] > mx) {
                        mx = height[j];
                        pos = j;
                    }

                    if(height[j] >= height[i]) {
                        pos = j;
                        break;
                    }
                }

                if(pos == -1) break;

                int h = min(height[i], height[pos]);
                int a = 0;

                for(int k = i + 1; k < pos; k++) {
                    a += height[k];
                }

                area += h * (pos - i - 1) - a;

                i = pos - 1;
            }
        }

        return area;
    }
};
