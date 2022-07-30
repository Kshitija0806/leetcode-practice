class Solution {
public:
    int titleToNumber(string columnTitle) {
//         int val[27]={0};
        
//         for(int i=1;i<=26;i++){
//             val[i]=i;
//         }
        
        
//         int res=0;
//         int j=0;
        
//         for(int i=columnTitle.length()-1;i>=0;i--){
//             res+=26^j*val[columnTitle[i]-'A'];
//             j++;
//         }
        
//         return res;
        
        
        
       string s=columnTitle;
        int n=s.size();
        int result=0;
        
        for(int i=0;i<n;i++){
            int d= s[i]-'A'+1;
            result=result*26+d;
        }
        
        return result;
    }
};