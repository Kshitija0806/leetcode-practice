class Solution {
public:
    int trap(vector<int>& height) {
        //Optimized solution: This will use array preprocessing
        int left[height.size()],right[height.size()];
        //Now we will precompute the left and right max
        int left_max=INT_MIN,right_max=INT_MIN;
        
        for(int i=0;i<height.size();i++){  //for left_max we will iterate from left side
            left_max=max(left_max,height[i]);
            left[i]=left_max;
        }
        
        for(int i=height.size()-1;i>=0;i--){ //for right_max we will iterate from right side
            right_max=max(right_max,height[i]);
            right[i]=right_max;
        }
        
        int water=0;
        
        //After the preprocessing we will find water stored at individual index by the formula
        for(int i=0;i<height.size();i++){
            water+=(min(left[i],right[i])-height[i]);
        }
        
        return water;
    }
};