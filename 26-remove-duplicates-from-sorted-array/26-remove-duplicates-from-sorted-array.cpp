class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //Brute force
        
        //Using set
        
//         set<int> st;  //here in the set we have to maintain order of elements
        
//         for(int i=0;i<nums.size();i++){
//             st.insert(nums[i]);
//         }
        
//         int k=st.size();
//         int j=0;
//         for(auto x: st){
//             nums[j++]=x;
//         }
//         return k;
        
        //Efficient approach: Two pointer approach
        
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){  //when we get a different element fro the current
                i++; //first move i forward
                nums[i]=nums[j];   //replace arr[i] with arr[j]
            }
        }
        
        return i+1;   //at last return i+1
   }
};