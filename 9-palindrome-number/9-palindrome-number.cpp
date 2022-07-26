class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0){
            return false;
        }
        vector<int> vec;
        stack<int> st;
        int n=x;
        
        while(n!=0){
            int rem=n%10;
            st.push(rem);
            vec.push_back(rem);
            n=n/10;
        }
        // int j=st.top();
        for(int i=0;i<vec.size();i++){
            int pop_ele=st.top();
            st.pop();
            if(pop_ele!=vec[i]){
                return false;
            }
        }
        return true;
    }
};