class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     //Naive solution: Traversing the array
        
        int fOcc=-1,lastOcc=-1;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(fOcc==-1){
                    fOcc=i;
                    lastOcc=i;
                }else{
                    lastOcc=i;
                }
            }
        }
        ans.push_back(fOcc);
        ans.push_back(lastOcc);
        return ans;
    }
};