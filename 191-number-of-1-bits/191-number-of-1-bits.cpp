class Solution {
public:
    int hammingWeight(uint32_t n) {
//         int res=0;
//         while(n>0){
//             if(n%2!=0){
//                 res++;
//             }
//             n=n/2;
//         }
        
//         return res;
        
        //Brian Kerningam's algo
        
        int res=0;
        while(n > 0){
            n=(n&(n-1));
            res++;
        }
        
        return res;
    }
};