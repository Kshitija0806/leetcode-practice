class Solution {
public:
    bool isHappy(int n) {
        if((n==1) || (n==7)){
            return true;
        }
        
        else if((n < 10)){
            return false;
        }
        
        int temp=n;
        int ans=0;
        while(temp!=0){
            ans+=((temp%10)*(temp%10));
            temp=temp/10;
        }
        
        return (isHappy(ans));
        
        
    }
};