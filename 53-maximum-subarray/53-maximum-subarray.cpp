class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int max_sum=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        // int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         max_sum=max(max_sum,sum);
        //     }
        // }
        // return max_sum;
        
        int max_sum=nums[0];
        //Here we are not taking max_sum=INT_MIN because in the question it is asked to have at least one
        //number in the subarray
        int sum=0; //initialize sum=0
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];  //we will take sum of numbers in a variable sum
            if(sum > max_sum){  //if sum is greater than max_sum we will update max_sum to sum
                max_sum=sum;
            }
            
            if(sum < 0){ //But if sum is less than zero than we will not take it forward and make it zero
                sum=0; //As we have to find maximum sum taking a negative value forward is not a good idea
            }
        }
        return max_sum;
    }
};