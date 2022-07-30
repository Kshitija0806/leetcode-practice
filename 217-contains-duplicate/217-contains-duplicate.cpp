class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Naive solution
        
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]==nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
        
        //Efficient solution
        //For this problem we will use set
        
        unordered_set<int> res;
        
        for(int i=0;i<nums.size();i++){
            if(res.find(nums[i])==res.end()){  //means present
                res.insert(nums[i]);
            }else{
                return true;
            }
        }
        
        return false;
    }
};