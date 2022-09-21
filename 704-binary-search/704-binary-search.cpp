class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Naive solution: Traverse whole array and find
        //Time: O(n)
        
        //Efficient solution: Given that the array is sorted. So we will use binary search
        
        int start=0,end=nums.size()-1;
        
        while(start<=end){
            int mid=(start+end)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]> target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return -1;
        
        //Time complexity of binary search is: O(logN)
    }
};