class Solution {
public:
    bool isPalindrome(int x) {
        
//         if(x < 0){
//             return false;
//         }
//         vector<int> vec;
//         stack<int> st;
//         int n=x;
        
//         while(n!=0){
//             int rem=n%10;
//             st.push(rem);
//             vec.push_back(rem);
//             n=n/10;
//         }
//         // int j=st.top();
//         for(int i=0;i<vec.size();i++){
//             int pop_ele=st.top();
//             st.pop();
//             if(pop_ele!=vec[i]){
//                 return false;
//             }
//         }
//         return true;
        
//         if(x < 0){
//             return false;
//         }
        
//         int n=x;
//         unsigned long int sum=0;
        
//         while(n!=0){
//             sum=sum*10+n%10;
//             n=n/10;
//         }
        
//         return (sum==x);
        
        string s=to_string(x);
        string h=s;
        reverse(h.begin(),h.end());
        return(h==s);
    }
};