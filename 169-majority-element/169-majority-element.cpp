class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Naive solution :Calculate for every number
        //Time : O(N^2)
        
        
        //Better solution: To use count array or maps
        //Count array can be used if the numbers are in a particular small range
        //Maps used if numbers not in a range
        // Time complexity: For count array O(N) and for maps O(NlogN)
        
        
        //Efficient solution: Moore's voting alogorithm
        //Here we have to take two variables count and element both 0 initially
        //If count==0, current traversing element will be element
        //If element==current traversing element then count++
        //If elemen!=current traversing element then count--
        
        int count=0;
        int element=0;
        
        for(int i=0;i<nums.size();i++){
            if(count==0){
                element=nums[i];
            }
            
            if(element!=nums[i]){
                count--;
            }else{
                count++;
            }
        }
        return element;
        
    }
};