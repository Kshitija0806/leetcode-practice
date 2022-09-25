class Solution {
public:
    

    string reverseWords(string s) {
       //Naive solution: To use stack 
        //We will create a stack and go on adding words to the stack one by one
        // And at last when we will pop the words will be in reverse order
        
//         int i=0;
//         string str="";
//         stack<string> st;
//         if(s[i]==' ')i++;
//         while(i<s.length()){
//             if(s[i]!=' '){
//                 str+=s[i];
//             }else{
//                 st.push(str);
//                 str="";
//             }
//             i++;
//         }
        
//         st.push(str);
//         string ans="";
//         while(st.size()!=1){
//             ans+=st.top();
//             st.pop();
//             ans+=" ";
//         }
//         ans+=st.top();
//         st.pop();
//         return ans;
        
string res;
        for(int l=s.length()-1;l>-1;l--){
            if(s[l]==' ')   continue;
            int r=l;
            while(l>-1&&s[l]!=' '){
                l--;
            }
            res+=s.substr(l+1,r-l)+" ";
        }
        if(res.back()==' ') res.pop_back();
        return res;
    }
};