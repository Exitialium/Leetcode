class Solution {
public:
    int maxArea(vector<int>& height) {
        int front = 0;
        int back = height.size() - 1;
        int mxArea = 0;
        while (back > front) {
            int area = min(height[front], height[back]) * (back - front);
            if (area > mxArea) {
                mxArea = area;
            }
            if (height[front] > height[back]) {
                back --;
            } else {
                front ++;
            }
        }
        return mxArea;
    }
};