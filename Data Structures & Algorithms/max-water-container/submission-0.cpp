class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_water = 0;

        while(left < right){
            int curr_height = min(heights[left], heights[right]);
            int width = right - left;
            int curr_area = curr_height * width;

            max_water = max(max_water, curr_area);

            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
    }
};
