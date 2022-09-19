class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Naive solution using sorting
        
//        if(nums.size() == 0 ){
//             return 0;
//         }
        
//         sort(nums.begin(),nums.end());
        
//         int ans = 1;
//         int prev = nums[0];
//         int cur = 1;
        
//         for(int i = 1;i < nums.size();i++){
//             if(nums[i] == prev+1){
//                 cur++;
//             }
//             else if(nums[i] != prev){
//                 cur = 1;
//             }
//             prev = nums[i];
//             ans = max(ans, cur);
//         }
//         return ans;
        
        //Efficient solution: To use set
        //We will use set and not unoredered_set because the order matters
        
        set<int> st;
        
        for(auto x:nums){
            st.insert(x);
        }
        
        
        int max_len=0;
        int curr_len=0;
        int curr_num;
        
        for(auto x:st){
            if(st.find(x-1)==st.end()){
                curr_len=1;
                curr_num=x;
            }
            
            while(st.find(curr_num+1)!=st.end()){
                curr_len++;
                curr_num++;
            }
            
            max_len=max(max_len,curr_len);
                
    }
        return max_len;
    }
    
};