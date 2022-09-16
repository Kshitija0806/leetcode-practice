class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Naive solution: Traverse whole array
        //Time: O(m*n)
        
        //Efficient solution: We will make use of the fact that the matrix is rowwise and columnwise sorted
        //1. We will start traversing from top right corner because other give not found answer
        //2. Then if target is greater than the current element we will move down
        //3. If target is smaller we will move to left
        
        
        int row=matrix.size(), column=matrix[0].size();
        int i=0,j=column-1;
        
        while(i<row && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            
            if(matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};