class Solution {
public:
    int firstUniqChar(string s) {
        
        //Naive solution
        
        for(int i=0;i<s.length();i++){
            bool flag=true;
            for(int j=0;j<s.length();j++){
                if(i!=j && s[i]==s[j]){  //means not distinct
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                return i;
            }
            
        }
            return -1;
        
        
        //Efficient solution
//         int count[26]={0};
        
//         for(int i=0;i<s.length();i++){
//             count[s[i]-'a']++;
//         }
        
//         for(int i=0;i<s.length();i++){
//             if(count[s[i]-'a']==1){
//                 return i;
//             }
//         }
//         return -1;
    }
};