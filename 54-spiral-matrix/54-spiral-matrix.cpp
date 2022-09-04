class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // For this problem we have to maintain four pointers top, bottom. left and right
        //1. Print top from left to right, then top++
        //2. Print right from top to bottom, then right--
        //3. Print bottom from right to left, then bottom--
        //4. Print left from bottom to top, then left++
        
        int top=0,right=matrix[0].size()-1,bottom=matrix.size()-1,left=0;
        vector<int> res;
        
        while(top<=bottom && left<=right){
            //Printing top
            for(int i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            
            //Printing right
            for(int i=top;i<=bottom;i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            
            if(top<=bottom){  //to avoid repetition
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};