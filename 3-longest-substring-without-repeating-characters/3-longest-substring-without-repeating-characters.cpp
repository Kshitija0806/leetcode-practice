class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         int length=0,max_length=0;
//         int count[26]={0};
        
//         for(int i=0;i<s.length();i++){
//             if(count[s[i]-'a']==1){
//                 max_length=max(max_length,length);
//                 length=0;
//                 fill(count,count+26,0);
//                 i--;
//             }else{
//                 count[s[i]-'a']++;
//                 length++;
//             }
//         }
//         return max_length;
        
        vector<int> mpp(256,-1);
        int left=0,right=0,n=s.size();
        int len=0;
        
        while(right<n){
            if(mpp[s[right]]!=-1){  //means already present in map
                left=max(left,mpp[s[right]]+1);
            }
            mpp[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};