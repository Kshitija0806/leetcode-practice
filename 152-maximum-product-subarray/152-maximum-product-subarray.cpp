class Solution {
public:
    int maxProduct(vector<int>& nums) {
//         int max_product=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             int prod=1;
//             for(int j=i;j<nums.size();j++){
//                 prod*=nums[j];
//                 max_product=max(max_product,prod);
//             }
            
//         }
        
//         return max_product;
        
        //Kadene's algorithm means we will not take that value forward which is decreasing the value.
        
//         int maxP=nums[0];
//         int prod=1;
        
//         for(int i=0;i<nums.size();i++){
//             if((prod >0 && nums[i]>0) || (prod <0 && nums[i]<0)){
//                 prod*=nums[i];
//                 maxP=max(maxP,prod);
//             }
//             else if(nums[i]==0){
//                 if(maxP < 0){
//                     maxP=0;
//                     prod=1;
//                 }
//             }
//             else{
//                 prod=1;
//             }
//         }
//         return maxP;
        
        int prod=1;
        int maxp=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            maxp=max(maxp,prod);
            if(prod==0){
                prod=1;
            }
        }
        
     prod=1;
        
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            maxp=max(maxp,prod);
            if(prod==0){
                prod=1;
            }
            
        }
        
        return maxp;
    }
};