class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Algorithm
        //1. First we will traverse through the first string and compare each of its character with //characters in the other strings. If it matches we will add it to string. If it does not match we will break //and return the ans.
        
        int n=strs.size();
        string ans ="";
        
        //Traversing through the first string
        for(int i=0;i<strs[0].size();i++){  //here size is considered of first string
            //We will take character by character
            char ch=strs[0][i];
            bool match =true;  
            //Now we will make this character with other characters in string
            for(int j=1;j<n;j++){
                //we will have this bool variable to keep an eye on the matches
                if(ch!=strs[j][i]){
                    match=false;
                    break;
                }
            }
            if(match==false){//means the character doesnot match with every character in string
                break;
            }else{
                ans+=ch;
            }
        }
        
        return ans;
    }
};