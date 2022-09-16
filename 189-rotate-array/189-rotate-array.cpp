class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Naive solution: Using a dummy array
        
          int n=nums.size();
        if (n == 0)
    return;
  k = k % n;
        if(k==0){
            return;
        }
  if (k > n)
    return;
        int dummy[k];
      
        int i=0;  //for dummy
        
        for(int j=n-k;j<n;j++){
            dummy[i]=nums[j];
            i++;
            }
        
        for (int i = n - k - 1; i >= 0; i--)
              {
                nums[i + k] = nums[i];
              }
        
        for(int i=0;i<k;i++){
            nums[i]=dummy[i];
        }
    }
};