class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int maxArea = 0;
        while(left < right){
            int area = min(heights[left], heights[right]) * (right-left);
            if(min(heights[left], heights[right]) == heights[left]){
                left++;
            } else {
                right--;
            }
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};
