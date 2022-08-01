class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int> mp;
        
        while(n!=1){
            if(mp.find(n)==mp.end()){
                mp.insert(n);
            }else 
                return false;
            
            int temp=n;
            int ans=0;
            while(temp!=0){
                ans+=(temp%10)*(temp%10);
                temp=temp/10;
            }
            n=ans;
            
        }
        return true; 
    }
};