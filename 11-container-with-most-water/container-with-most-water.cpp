class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size()-1;
        int area = 0;
        while(low<high){
            if(height[low] < height[high]){
                if(area < height[low]*(high-low))
                    area = height[low]*(high-low);
                low++;
            }
            if(height[low] >= height[high]){
                if(area < height[high]*(high-low))
                    area = height[high]*(high-low);
                high--;
            }
        }
        return area;
    }
};