class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Naive solution: Form every subarray and find maximum sum and length
        //Time : O(n^2)
        
        //Efficient approach is to use Kadane's algorithm
        
        int sum=0,max_sum=INT_MIN;
        //The basic idea of Kadane's algorithm is that he don't have to take a negative sum forward
        //because it decreses the max_sum
        //So then the sum becomes negative we make sum=0
        //And everytime we compare sum and max_sum
        
        for(auto i:nums){
            sum+=i;
            max_sum=max(max_sum,sum);
            if(sum<0){
                sum=0;
            }
        }
        
        return max_sum;
    }
};