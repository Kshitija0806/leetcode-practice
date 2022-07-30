class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> s;
        
        for(int i=0;i<nums1.size();i++){
            s[nums1[i]]++;
        }
        
        vector<int> ans;
        
        for(int j=0;j<nums2.size();j++){
            if(s[nums2[j]]>0){
                ans.push_back(nums2[j]);
                s[nums2[j]]--;
            }
            }
        
        
        return ans;
    }
};