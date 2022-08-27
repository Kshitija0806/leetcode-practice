class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=INT_MIN;
        int n=height.size();
        int left=0,right=n-1;
        
        while(left<=right){
            int water=min(height[left],height[right])*(abs(left-right));
            //water= min(values at left and right)*horizontal diff
            max_water=max(max_water,water);
            if(height[left]>height[right])right--;
            else left++;
        }
        
        return max_water;
    }
};