class Solution {
public:
    int trap(vector<int>& height) {
        // int totalWater = 0;
        // for(int i = 0; i < height.size(); i++){
        //     int leftMax = 0;
        //     int rightMax = 0;
        //     //find max from left
        //     for(int left = i; left >= 0; left--){
        //         leftMax = max(leftMax, height[left]);
        //     }
        //     //find max from right
        //     for(int right = i; right< height.size(); right++){
        //         rightMax = max(rightMax, height[right]);
        //     }
        //     totalWater += min(leftMax, rightMax) - height[i];
        // }/

        int left = 0;
        int right = height.size() - 1;
        int leftMax = 0;
        int rightMax  = 0;
        int totalWater = 0;
        while(left <= right){
            if(height[left] <= height[right]){
                if(height[left] >= leftMax){
                    leftMax = height[left];
                }
                else{
                    totalWater += leftMax - height[left];
                }
                left++;
            }
            else{
                if(height[right] >= rightMax){
                    rightMax = height[right];
                }
                else{
                    totalWater += rightMax - height[right];
                }
                right--;
            }
        }
        return totalWater;
    }
};