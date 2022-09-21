class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     //Naive solution: Traversing the array
        
//         int fOcc=-1,lastOcc=-1;
//         vector<int> ans;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==target){
//                 if(fOcc==-1){
//                     fOcc=i;
//                     lastOcc=i;
//                 }else{
//                     lastOcc=i;
//                 }
//             }
//         }
//         ans.push_back(fOcc);
//         ans.push_back(lastOcc);
//         return ans;
        
        //Also we know that the array is sorted. So for last occurence we will start from the back
        
        int fOcc=-1,lastOcc=-1;
        vector<int> ans;
        int n=nums.size();
        
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                lastOcc=i;
                break;
            }
        }
        
        if(lastOcc!=-1){
            for(int i=0;i<n;i++){
                if(nums[i]==target){
                    fOcc=i;
                    break;
                }
            }
        }
        
        ans.push_back(fOcc);
        ans.push_back(lastOcc);
        return ans;
    }
};