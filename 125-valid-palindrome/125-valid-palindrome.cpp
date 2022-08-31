class Solution {
public:
    bool isPalindrome(string s) {
        
//         string res="";
//         for(int i=0;i<s.length();i++){
//             if(s[i]>='A' && s[i]<='Z'){
//                 res+=tolower(s[i]);
                
//             }else if(s[i]>='a' && s[i]<='z'){
//                 res+=s[i];
//             }   
//         }
        
        
//         int i=0,j=res.length()-1;
//         while(i<=j){
            
//             if(res[i]!=res[j])return false;
//             i++;
//             j--;
//         }
//         return true;
        
        
        int i=0,j=s.length()-1;
        while(i<j){
            while(isalnum(s[i])==false && i<j){i++;}
            while(isalnum(s[j])==false && i<j){j--;}
            if(toupper(s[i])!=toupper(s[j]))return false;
            i++;
            j--;
        }
        return true;
        
//         for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
//         while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric
//         while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
//         if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
//     }
    
//     return true;
    }
};