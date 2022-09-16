class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //Brute force
        
        //Using set
        
        set<int> st;  //here in the set we have to maintain order of elements
        
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        
        int k=st.size();
        int j=0;
        for(auto x: st){
            nums[j++]=x;
        }
        return k;
    }
};